#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - A function that inserts a node as the left child
 * @parent: a pointer to the node where the child node will be inserted
 * @value: integer to store in the new node
 * short description: If parent already has a left-child,
 * the new node must take its place, and the old left-child must be
 * set as the left-child of the new node.
 *
 * Return: A pointer to the new node, or NULL on failure
 * or if parent is NULL a pointer to the new node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Handle whwere parent node has a left child */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->parent = parent;
	}
	parent->left = new_node;
	return (new_node);
}
