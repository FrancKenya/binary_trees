# include "binary_trees.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * binary_tree_preorder - A function that uses pre-oder traversal
 * to go through a tree
 * @tree: points to the root of the tree being traversed
 * @func: points to a function to call for each node
 * short description: The value in the node must be passed as
 * a parameter to this function.
 * If tree or func is NULL, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		func(tree->n);
		/* traversing the left sub tree */
		binary_tree_preorder(tree->left, func);
		/* traversing the right sub tree */
		binary_tree_preorder(tree->right, func);
	}
}
