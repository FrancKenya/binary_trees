#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: points to the parent node of the node created
 * @value: An integer representing value put in the new node created
 * short description: The node created will be a leaf node
 *
 * Return: A pointer to the new node or NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL); /* if failed malloc return NULL */
	}
	new_node->n = value; /* Put the value to the new node */
	new_node->parent = parent; /* attach it to the parent node */
	/* make the new node a leaf node */
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node); /* return a pointer to the new node */
}
