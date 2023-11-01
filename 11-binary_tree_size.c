# include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: Points to the root node of the tree being measured
 *
 * Return: size or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (!tree)
		return (0);
	if (tree->left)
	{
		left_tree = binary_tree_size(tree->left);
	}
	else
		left_tree = 0;
	if (tree->right)
	{
		right_tree = binary_tree_size(tree->right);
	}
	else
		right_tree = 0;
	return (1 + (right_tree + left_tree));
}
