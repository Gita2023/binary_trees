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

/**
 * binary_trees_ancestor - to finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *a = (binary_tree_t *)first, *b = (binary_tree_t *)second;
	size_t depth_a, depth_b;

	if (!first || !second)
		return (NULL);

	depth_a = binary_tree_depth(a);
	depth_b = binary_tree_depth(b);
	for (; depth_b > depth_a; depth_b--)
		b = b->parent;
	for (; depth_a > depth_b; depth_b--)
		a = a->parent;
	while (a && b)
	{
		if (a == b)
			return (a);
		a = a->parent;
		b = b->parent;
	}
	return (NULL);
}
