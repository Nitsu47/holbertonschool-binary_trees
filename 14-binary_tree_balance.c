#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: int(balance factor)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = 0;
	right = 0;
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: the measure of the tree or 0 if empty
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
