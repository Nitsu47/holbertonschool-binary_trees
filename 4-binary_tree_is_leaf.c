#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node to be checked
 * Return: returns 0 if the node has children
 * or 1 if the node has no children and is a leaf
 *
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left != NULL)
	{
		return (0);
	}

	if (node->right != NULL)
	{
		return (0);
	}

	return (1);
}
