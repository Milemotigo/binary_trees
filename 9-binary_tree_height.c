#include "binary_trees.h"

/**
 * binary_tree_height - used to measure the height of a binary tree.
 *@tree: is a pointer to the root node of the tree to measure the height.
 * Return: function must return 0, if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
