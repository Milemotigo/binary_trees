#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: int
 */
 int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->right != NULL && tree->left != NULL)
	    return (1);
    else
    return(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
