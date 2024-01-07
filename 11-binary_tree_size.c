#include "binary_trees.h"

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
