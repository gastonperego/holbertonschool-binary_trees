#include "binary_trees.h"

/**
 * binary_tree_height_ - measures the height of the binary tree
 * @tree: pointer to root node of the tree to measure height
 * Return: if tree is NULL, return 0, else return the height
 */
int binary_tree_height_(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height_(tree->left) + 1;
	rightHeight = binary_tree_height_(tree->right) + 1;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: if tree is NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height_(tree->left) - binary_tree_height_(tree->right));

	return (0);
}
