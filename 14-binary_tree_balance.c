#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: int(balance factor)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	return (left - right);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: the measure of the tree or 0 if empty
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_height(tree->left) + 1;
	size_t right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}