#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

    if (tree == NULL || tree->parent == NULL)
	    return (0);
    depth = binary_tree_depth(tree->parent);
	    return(depth + 1);
}
