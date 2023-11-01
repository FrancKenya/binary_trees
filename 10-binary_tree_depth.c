# include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a node
 * in a binary tree provided
 * @tree: points to the node to measure it's depth
 *
 * Return: Depth of the node and 0 if node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
	{
		return (0);
	}
	for (depth = 0; tree->parent != NULL; depth++)
		tree = tree->parent;
	return (depth);
}
