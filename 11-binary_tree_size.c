#include "binary_trees.h"


/**
 * binary_tree_size - Returns the size of the tree
 * @tree: The pointer to the root to count from
 * Return: The number of nodes
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
