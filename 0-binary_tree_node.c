#include "binary_trees.h"

/**
* binary_tree_node - create a new node without childs.
* @parent: refears to the parent of the node.
* @value: value in the node.
* Return: the new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (0);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
