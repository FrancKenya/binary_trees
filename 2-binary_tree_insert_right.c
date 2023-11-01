#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_insert_right - A function that inserts a new node as the right
 * child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: Integer to attach to the new node
 * Short description: If parent already has a right-child,
 * the new node must take its place, and the old right-child must be set
 * as the right-child of the new node.
 *
 * Return: A pointer to the new node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	/* Handle parent having a right child */
	if (parent->right != NULL)
	{
		/* Point the new node to the existing child node */
		new_node->right = parent->right;
		/* make the new node the parent of the existing child node */
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
