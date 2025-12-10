#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_preorder - goes through the binary tree in preorder traversal.
* @tree: pointer to the node of the tree.
* @func: pointer to the function to use with each node.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
