#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node.
 * Return: if a binary tree is perfect,
 * or 0 if tree us NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
	{
		if (binary_tree_is_perfect(tree->left))
		{
			if (binary_tree_is_perfect(tree->right))
			{
				return (1);
			}
		}
	}
	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: the height of a binary tree or 0 if tree is NULL.
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
