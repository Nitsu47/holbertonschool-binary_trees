#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node.
 * Return: 1 if is perfect or 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int height = binary_tree_height(tree);
	int size = binary_tree_size(tree);

	return ((tree->left && tree->right) && (1 << height) - 1 == size);
}
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: the measure of the tree or 0 if empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the root node.
 * Return: size of the tree or 0.
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
