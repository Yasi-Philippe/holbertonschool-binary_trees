#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_height - calculates the height of a tree
* @tree: pointer to the root node of the tree.
* Return: size_t type. The height of the tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}



/**
* binary_tree_balance - checks wether a binary tree is balanced.
* @tree: pointer to the root node of the tree.
* Return: int type. Returns the balance factor of a tree.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (height_left - height_right);
}
