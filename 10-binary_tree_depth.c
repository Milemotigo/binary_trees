#include "binary_trees.h"
/**
 * binary_tree_depth - to measure the depth of a node in a binary tree.
 *@tree: is a pointer to the node used to measure the depth.
 * Return: if tree is NULL, function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
