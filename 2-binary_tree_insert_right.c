#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
*
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
*
* Return: pointer to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right = newnode;
		(newnode->right)->parent = newnode;
	}
	else
	{
		newnode->right = NULL;
		parent->right = newnode;
	}
	return (newnode);
}
