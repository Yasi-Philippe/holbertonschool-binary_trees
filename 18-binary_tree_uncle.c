#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_uncle - Checks the node of the oncle.
 * @node: Pointer to the nephew node.
 * Return: A pointer to the oncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (!node)
		return (0);
	if (!node->parent)
		return (0);
	parent = node->parent;
	if (!parent->parent)
		return (0);
	grand_parent = parent->parent;
	if (grand_parent->left == parent)
		return (grand_parent->right);
	return (grand_parent->left);
}
