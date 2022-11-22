#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves of a root node
 * @tree: The root node to count from
 * Return: The number of leaf nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
