#include "binary_trees.h"
/**
* checks if a node is a leaf
*
* @node: pointer to the node to check
*
* Return: 1 if the node is leaf, 9 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (!node->left && !node->right)
        return (1);
    else
        return(0);
}