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
