# include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes with atleast 1 child
 * in a binary tree
 * @tree: Points to the root node of the tree
 *
 * Return: Number of nodes with 1 child or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t children = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		children += 1;
	}
	else
	{
		children += 0;
	}
	if (tree->left)
	{
		children += binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		children += binary_tree_nodes(tree->right);
	}
	return (children);
}
