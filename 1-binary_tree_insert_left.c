#include "binary_trees.h"


/**
 * binary_tree_insert_left - a function that inserts a node as the left-child of another node.
 * @parent: The parent node
 * @value: The value at the node
 * Return: The new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_insert_left *new_node;

	new_node = malloc(sizeof(binary_tree_insert_left));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left)
		new_node->left = parent->left;
	parent->left = new_node;
	return (parent);
}
