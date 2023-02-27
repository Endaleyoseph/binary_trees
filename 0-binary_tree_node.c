#include "binary_trees.h"

/**
 * binary_tree_node - creats a node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: returns pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	if (parent == NULL)
	{
		node->n = value;
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}

	return (node);
}
