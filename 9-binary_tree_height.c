#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures height of a binary tree
 * @tree: points to the root of the tree
 * Return: height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height, i;

	if (!tree)
	{
		return (0);
	}
	/* find right height of the tree */
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right_height = 0;
	}
	/* find left height of the tree */
	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left_height = 0;
	}

	i = (right_height > left_height ? right_height : left_height);
	return (i);
}
