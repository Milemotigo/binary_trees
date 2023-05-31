#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t rights, lefts, height = 0;

    if (tree != NULL)
    {
        rights = tree->right ? binary_tree_height(tree->right) + 1 : 0;
        lefts = tree->left ? binary_tree_height(tree->left) + 1 : 0;
        height += (rights > lefts ? rights : lefts);
    }
    return (height);
}
