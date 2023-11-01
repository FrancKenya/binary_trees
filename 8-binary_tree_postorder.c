# include "binary_trees.h"

/**
 * binary_tree_postorder - A function that uses post-order traversal to go
 * through a tree
 * @tree: points to the root node of that tree
 * @func: points to the fucntion to call for each node.
 * The value in the node has be passed as a parameter to func function.
 * If tree or func is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func); /* Traverse left */
	binary_tree_postorder(tree->right, func); /* Traverse right */
	func(tree->n); /* handle root node */

}
