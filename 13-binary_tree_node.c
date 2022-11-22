#include "binary_trees.h"


/**
 * binary_tree_nodes - it counts the nodes with at least
 * 1 child in a binary tree
 * @tree: The root node
 * Return: The number of nodes that meets the condition
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
