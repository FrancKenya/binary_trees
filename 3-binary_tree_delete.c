#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - A function that deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to be deleted
 * short descriotion: If tree is NULL, do nothing
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	else
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	}
}
