#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_preorder_sum - goes through the binary tree in preorder traversal
* @tree: pointer to the node of the tree.
* @sum: sum of the the leaves encountered.
*/

void binary_tree_preorder_sum(const binary_tree_t *tree, size_t *sum)
{
	if (!tree)
		return;
	if (!tree->left && !tree->right)
		*sum += 1;
	binary_tree_preorder_sum(tree->left, sum);
	binary_tree_preorder_sum(tree->right, sum);
}

/**
* binary_tree_leaves - calculates the  leaves of a tree.
* @tree: pointer to the root node of the tree.
* Return: size_t type. The leaves of the tree.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;
	size_t *sum_ptr = &sum;

	if (!tree)
		return (sum);
	if (!tree->right && !tree->left)
		return (1);
	binary_tree_preorder_sum(tree->left, sum_ptr);
	binary_tree_preorder_sum(tree->right, sum_ptr);
	return (sum);
}
