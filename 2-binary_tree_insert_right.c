#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	if (!(parent->right))
	{
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
		parent->right = node;
	}
	else
	{
		node->n = value;
		node->left = NULL;
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
		node->parent = parent;
	}
	return (node);
}
