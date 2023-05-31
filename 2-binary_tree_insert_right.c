#include "binary_trees.h"                                             
/**
 * binary_tree_t - function that inserts a node as the right-child of another node
 * parent:  a pointer to the parent node of the node to create
 * value: the value to put in the new node
 * return: *new_node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right_child = parent->right;
	/* allocate a memory that points to the new node*/
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return NULL;
	if (parent == NULL)
		return NULL;
	new_node->n = value;
	new_node->parent = parent;
	parent->right = new_node;
	if (old_right_child != NULL)
	{
		old_right_child->parent = new_node;
		new_node->right = old_right_child;
	}
	return new_node->right;

}
