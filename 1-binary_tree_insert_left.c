#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
*
* @parent: pointer to the node to insert the left-child in
* @value: value of the new node
*
* Return: pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left = newnode;
		(newnode->left)->parent = newnode;
	}
	else
	{
		newnode->left = NULL;
		parent->left = newnode;
	}
	return (newnode);
}
