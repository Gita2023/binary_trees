#include "binary_trees.h"

/**
 * binary_tree_is_full - to checks if the binary tree is full
 * @tree: pointer to the root of the tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
