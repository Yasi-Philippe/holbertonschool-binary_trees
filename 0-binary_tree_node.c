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
	binary_tree_t *tempNode;
	binary_tree_t *current;

	binary_tree_t *tempNode = malloc(sizeof(binary_tree_t));

	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	if (root == NULL)
	{
		root = tempNode;
	}
	else
	{
		current = root;
		parent = NULL;
		while (1)
		{
			parent = current;
			if (value < parent->n)
			{
				current = current->left;
				if (current == NULL)
				{
					parent->left = tempNode;
					return (current);
				}
			}
			else
			{
				current = current->right;
				if (current == NULL)
				{
					parent->right = tempNode;
					return (current);
				}
			}
		}
	}
}
