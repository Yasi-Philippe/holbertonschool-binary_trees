#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_depth - calculates the depth of a tree
* @tree: pointer to the root node of the tree.
* Return: size_t type. The depthof the tree.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = -1;

	while (tree)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
