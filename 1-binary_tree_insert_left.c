#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: new pointer or 0 on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{	
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (0); /* retorna 0 si el parent esta vacio*/

	new = binary_tree_node(parent, value); /*llama a la funcion creada en el ej 0*/

	/*se inserta el nuevo nodo a la izquierda de parent*/
	if (parent->left)
    {
        new->left = parent->left;
        parent->left->parent = new;
    }

	parent->left = new; /*el nuevo nodo va a ser el hijo izquierdo*/

	return (new);
}
