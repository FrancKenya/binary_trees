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

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: Points to the root node of the tree to check
 *
 * Return: Return 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
        int check_left = 0, check_right = 0;

        if (!tree)
        {
                return (0);
        }
        if (!tree->left && !tree->right)
        {
                return (1);
        }
        if (tree->left && tree->right)
        {
                check_left = binary_tree_is_full(tree->left);
                check_right = binary_tree_is_full(tree->right);
                return (check_right && check_left);
        }
        return (0);
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
