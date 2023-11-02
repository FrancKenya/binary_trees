# include "binary_trees.h"

/**
* binary_tree_leaves - A function that counts the leaves in a BT
* @tree: Points to the root node of the bt
*
* Return: Number of leaves or 0 if tree is NULL
* A NULL pointer is not a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t total_leaves = 0;

if (!tree)
{
return (0);
}
/* Handle tree pointer being a leaf */
if (!tree->left && !tree->right)
{
total_leaves += 1;
}
else
{
total_leaves += 0;
}
/* count leaves on the left sub tree */
if (tree->left != NULL)
{
total_leaves += binary_tree_leaves(tree->left);
}
/* Count leaves on the right sub tree */
if (tree->right != NULL)
{
total_leaves += binary_tree_leaves(tree->right);
}

return (total_leaves);
}
