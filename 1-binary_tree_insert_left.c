#include "binary_trees.h"

/**
 * binary_tree_insert_left - to inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: input the value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->n = value;
	bt->parent = parent;
	if (parent->left)
	{
		bt->left = parent->left;
		bt->left->parent = bt;
	}
	parent->left = bt;
	return (bt);
}
