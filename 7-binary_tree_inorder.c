# include "binary_trees.h"

/**
 * binary_tree_inorder - A function that uses in-order transversal
 * to go through a tree
 * @tree: points to the root node of that tree
 * @func: points to a function to be called for each node
 * he value in the node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func); /* traverse the left sub tree */
	func(tree->n); /* current node */
	binary_tree_inorder(tree->right, func); /* traverse right sub tree */
}
