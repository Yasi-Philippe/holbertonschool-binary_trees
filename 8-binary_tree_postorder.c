#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_inorder - goes through the binary tree in order traversal.
* @tree: pointer to the node of the tree.
* @func: pointer to the function to use with each node.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree && !func)
		return;
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
