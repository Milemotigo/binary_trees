#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node
 * @parent:  a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: new_node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || !parent)
		return (0);
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
