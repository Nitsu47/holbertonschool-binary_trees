#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: the measure of the tree or 0 if empty
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		height_left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		height_right = 1 + binary_tree_height(tree->right);
	}

	if (height_left >= height_right)
	{
		return (height_left);
	}

	return (height_right);
}

/**
 * binary_tree_size -  function that measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: size of the tree or 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
	{
		return (0);
	}

	size = binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (1 + size);
}

/**
 * binary_tree_ - function that checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if is perfect or 0 if not 
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return 0;

	int height = binary_tree_height(tree);
	int size = binary_tree_size(tree);

	return (tree->left && tree->right) && (1 << height) - 1 == size;
}