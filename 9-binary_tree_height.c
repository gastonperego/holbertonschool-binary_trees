#include "binary_trees.h"
/**
* binary_tree_height- measures the height of a binary tree
*
* @tree: pointer to the root of the tree
*
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;

	if (!tree || (!tree->right && !tree->left)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}
