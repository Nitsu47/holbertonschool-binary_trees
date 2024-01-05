#include "binary_trees.h"

/**
 * binary_tree_delete - delete the nodes
 * @tree: pointer to the tree node
 * Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

   /*busca nodos derechos e izwuierdos en postorden y los elimina*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree); /*se libera el nodo completo*/
}
