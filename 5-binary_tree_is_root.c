#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: pointer to the node
 * Return: return 1 if node is a root, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL) /*si el nodo es nulo es raiz*/
	{
		return (1);
	}

	if (node->parent != NULL) /*si el nodo padre tiene hijos no es raiz*/
	{
		return (0);
	}

	return (1); /*retorna 1 si el arbol esta vacio*/
}
