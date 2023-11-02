# include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a BT is perfect
 * @tree: Points to the root node of the BT to be checked
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check_left = 0, check_right = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->right && tree->left)
	{
		check_left = binary_tree_height(tree->left);
		check_right = binary_tree_height(tree->right);
		if (check_left ==  check_right && binary_tree_is_full(tree))
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
