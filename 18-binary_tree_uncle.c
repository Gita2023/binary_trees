#include "binary_trees.h"

/**
 * binary_tree_sibling - to finds the sibling of a node
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

/**
 * binary_tree_uncle - to finds the uncle of the node
 * @node: pointer to the input node
 * Return: pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
