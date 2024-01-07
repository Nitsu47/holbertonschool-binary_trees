#include "binary_trees.h"

/**
 * binary_tree_depth -  function that measures the depth of a node
 * @tree: pointer to the root node
 * Return: the depth of the tree or 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
