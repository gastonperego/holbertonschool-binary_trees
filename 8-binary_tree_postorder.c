#include "binary_trees.h"
/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
*
* @tree: pointer to the root of the tree
* @func: function to be done to each node
*
* Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		;
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
