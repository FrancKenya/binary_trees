# include "binary_trees.h"

/**
 * binary_tree_sibling - Function finds the sibling of a node
 * @node: Points to the node it's sibling is being searched
 *
 * Return: A pointer to thay sibling node
 * Null if either parent or node is NULL or no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	return (NULL);
}
