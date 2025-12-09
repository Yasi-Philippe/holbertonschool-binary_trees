#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_node - add a new node to a binary tree.
* @parent: pointer to the root node of the tree.
* @value: value to put in the new node.
* Return: pointer to the new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
