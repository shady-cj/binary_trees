#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a node is the
 * root node
 * @node: The node to be checked
 * Return: 1 if root node and 0 if otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
