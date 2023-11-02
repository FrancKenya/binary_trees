# include "binary_trees.h"

/**
* binary_tree_is_perfect - A function that checks if a BT is perfect
* @tree: Points to the root node of the BT to be checked
*
* Return: 0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full_height, i;

	full_height = binary_tree_height(tree);
	i = is_perfect(tree, full_height, 0);
	return (i);

}
/**
 * is_perfect - A fuction that uses recursion to check if a tree is perfect
 * @tree: Points to the current tree
 * @full_height: height of the tree
 * @level: Current level in the tree
 *
 * Return: 0 if failed and 1 if perfect
 */
int is_perfect(const binary_tree_t *tree, int full_height, int level)
{
	int i;

	if (!tree)
	{
		return (level == full_height);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (level == full_height);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	i = (is_perfect(tree->left, full_height, level + 1) &&
	is_perfect(tree->right, full_height, level + 1));
	return (i);
}
/**
 * binary_tree_height - A fucntion that gets the height a BT
 * @tree: Points to the root of the binary tree
 *
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right_height, left_height, i;

if (!tree)
{
return (-1);
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
