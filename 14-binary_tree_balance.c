#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node
* Return: int(balance factor)
*/

int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    int left_height = binary_tree_balance(tree->left);
    int right_height = binary_tree_balance(tree->right);

    return left_height - right_height;
}
