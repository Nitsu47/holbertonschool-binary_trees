#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves
 * @tree: pointer to the root node
 * Return: NULL pointer is not a leaf
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_der = 0;
	size_t  leaves_izq = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->right == NULL)
	{
	return (1);
	}

	if (tree->left == NULL)
	{
		return (1);
	}

	leaves_izq = binary_tree_leaves(tree->left);
	leaves_der = binary_tree_leaves(tree->right);

	return (leaves_der + leaves_izq);
}
