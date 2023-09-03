#include "binary_trees.h"
/**
*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = NULL;

    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL || parent == NULL)
        return (NULL);
    newnode->parent = parent;
    newnode->n = value;
    if (parent->left != NULL)
    {
        newnode->left = parent->left;
        parent->left = newnode;
        newnode->left->parent = newnode;
    }
    else
        parent->left = newnode;
    
    return(newnode);
}