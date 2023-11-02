# include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: Points to the node to find the uncle for
 *
 * Return: A pointer to the uncle node or NULL if either node is NULL
 * or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	if (node->parent  == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	return (NULL);
}
