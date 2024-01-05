#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: new pointer or 0 on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (0); /* retorna 0 si el parent esta vacio*/

	new = binary_tree_node(parent, value);/*llama a la funcion creada en el ej 0*/

	/*se inserta el nuevo nodo a la derecha de parent*/
	if (parent->right)
	{
		new->right = parent->right; /*nuevo nodo a la derecha*/
		parent->right->parent = new;
	}

	parent->right = new; /*el nuevo nodo va a ser el hijo derecho*/

	return (new);
}
