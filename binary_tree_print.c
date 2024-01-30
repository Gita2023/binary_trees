#include "binary_trees.h"

/**
 * binary_tree_depth - to measures the depth of the node in a binary tree
 * @tree: the input of binary tree
 * Return: the depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		counter++;
		tree = tree->parent;
	}
	return (counter);
}
