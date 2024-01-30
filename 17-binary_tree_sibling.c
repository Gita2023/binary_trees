#include "binary_trees.h"

/**
 * binary_tree_sibling - to finds the sibling of the node
 * @node: pointer to the input node
 * Return: pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node
				? node->parent->right
				: node->parent->left);
}
