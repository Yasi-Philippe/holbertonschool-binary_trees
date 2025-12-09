#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks whether a node is a leaf.
* @node: pointer to the node of the tree.
* Return: Int. 1 if node is a leaf, else 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
