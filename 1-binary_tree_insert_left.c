#include "binary_trees.h"                                             
/**
 * binary_tree_t - function that inserts a node as the left-child of another node
 * parent:  a pointer to the parent node of the node to create
 * value: the value to put in the new node
 * return: *new_node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	binary_tree_t *old_left_child = NULL;
	/*allocate a memory that points to the new node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return NULL;
	if (parent == NULL)
		return NULL;

	if (parent->left != NULL)
		old_left_child = parent->left;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;
	parent->left = new_node;
	new_node->left = old_left_child;
/*	if (old_left_child != NULL)
	{
		old_left_child->parent = new_node;
		new_node->left = old_left_child;
	}
	*/
	return new_node;
}
