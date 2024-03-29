#include "binary_trees.h"
/**
 * binary_tree_preorder - travels a binary tree in order traversal
 * @tree: pointer to the root node
 * @func: a pointer to a function to call for each node.
 *  The value in the node must be passed as a parameter to this function.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}

	if (!func)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
