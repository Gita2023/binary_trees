#include "binary_trees.h"

/**
 * binary_tree_insert_right - to inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: input the value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->n = value;
	bt->parent = parent;
	if (parent->right)
	{
		bt->right = parent->right;
		bt->right->parent = bt;
	}
	parent->right = bt;
	return (bt);
}
