#include "binary_trees.h"

/**
 * binary_tree_postorder - to goes through a binary tree using post-order
 * traversal and performs function call on each node
 * @tree: pointer to the root of tree
 * @func: the function call to perform
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
