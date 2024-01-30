#include "binary_trees.h"

/**
 * _binary_tree_height - the helper func for binary_tree_height
 * @tree: input tree
 * Return: the height of tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (MAX(a, b) + 1);
}

/**
 * binary_tree_height - to measures the height of a binary tree
 * @tree: input tree
 * Return: the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_balance - to measures the balance factor of a binary tree
 * @tree: input tree
 * Return: the balance factor of descendants
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (a - b);
}
