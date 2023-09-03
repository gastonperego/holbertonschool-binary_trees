#include "binary_trees.h"
/**
* binary_tree_delete - deletes a binary tree
*
* @tree: pointer to the root of the tree
*
* Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree;

	if (!tree)
		;
	else
	{
		binary_tree_delete(tmp->left);
		binary_tree_delete(tmp->right);
		free(tmp);
	}
}
