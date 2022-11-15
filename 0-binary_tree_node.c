#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: The parent node
 * @value: The value at the node
 * Return: The pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int  value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	parent = new_node;
	return (parent);
}
