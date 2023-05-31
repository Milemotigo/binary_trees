#include "binary_trees.h"                                             
/**
 * binary_tree_delete - delete entire tree
 * tree:  tree is a pointer to the root node of the tree to delete
 * value: the value to put in the new node
 * return: NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}