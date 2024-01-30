#include "binary_trees.h"

/**
 * binary_tree_node - to creates a binary tree node
 * @parent: pointer to the parent node
 * @value: input the value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->parent = parent;
	bt->n = value;
	return (bt);
}
