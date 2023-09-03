#include "binary_trees.h"

/**
 * depthCompare - tree depth
 * @tree: pointer to the root
 * Return: depth
 */
int depthCompare(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (depthCompare(tree->left) + depthCompare(tree->right) + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is perfect, 0 if is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftHeight = depthCompare(tree->left);
	rightHeight = depthCompare(tree->right);

	if ((leftHeight - rightHeight) == 0)
		return (1);

	return (0);
}
