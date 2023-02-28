#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	if (!(parent->left))
	{
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
		parent->left = node;
	}
	else
	{
		node->n = value;
		node->right = NULL;
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
		node->parent = parent;
	}
	return (node);
}
