#include "binary_trees.h"

/**
 * binary_tree_height -  function that measures the height of a binary tree
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
