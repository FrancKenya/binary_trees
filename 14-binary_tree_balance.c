# include "binary_trees.h"

/**
 * binary_tree_balance - A fuction that measures the balance factor of a BT
 * @tree: Points to the root node of the tree to measure the balance factor
 *
 * Return: O if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int count_left = 0, count_right = 0;

	if(!tree)
	{
		return(0);
	}
	if (tree->left != NULL)
	{
		count_left += binary_tree_height(tree->left);
	}
	else
	{
		count_left += 0;
	}
	if (tree->right != NULL)
	{
		count_right += binary_tree_height(tree->right);
	}
	else
	{
		count_right += 0;
	}
	return (count_left - count_right);
}
/**
 * binary_tree_height - calculates the height of a tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{

	}

