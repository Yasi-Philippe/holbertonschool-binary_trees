#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node in the right
* @parent: pointer to the root node of the tree.
* @value: value to put in the new node.
* Return: pointer to the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	parent->right = new_node;
	return (new_node);
}
