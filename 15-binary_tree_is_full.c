#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: Pointer to the root node
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (!tree->right && !tree->left)
	    return (1);

    if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
	    return(0);
    else
    return(binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
}
