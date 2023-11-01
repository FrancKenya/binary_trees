#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf
 * @node: Pointer to the Node being checked
 *
 * Return: (Int) 1 if node is a leaf, otherwise 0
 * If node is NULL, also return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
