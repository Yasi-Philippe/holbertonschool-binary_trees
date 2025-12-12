#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* power - computes the power.
* @base: base
* @exp: exponent
* Return: The result.
*/

size_t power(size_t base, size_t exp)
{
	size_t i, result = 1;

	for (i = 0; i < exp; i++)
		result *= base;
	return (result);
}

/**
* binary_tree_preorder_sum_nodes - goes through the binary tree in preorder
* @tree: pointer to the node of the tree.
* @sum: sum of the the leaves encountered.
*/

void binary_tree_preorder_sum_nodes(const binary_tree_t *tree, size_t *sum)
{
	if (!tree)
		return;
	*sum += 1;
	binary_tree_preorder_sum_nodes(tree->left, sum);
	binary_tree_preorder_sum_nodes(tree->right, sum);
}

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
* binary_tree_is_perfect - checks wether a binary tree is balanced.
* @tree: pointer to the root node of the tree.
* Return: 1 if perfect. 0 if not perfect. 0 if a null pointer argument.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d;
	size_t sum = 0;
	size_t *sum_ptr = &sum;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	d = binary_tree_height(tree);
	binary_tree_preorder_sum_nodes(tree, sum_ptr);
	printf("%li %li", sum, d);
	if ((power(2, d + 1) - 1) != sum)
		return (0);
	return (1);
}
