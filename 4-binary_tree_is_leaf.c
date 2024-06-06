#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 *
 * @node: the node to check against
 * Return: 1 on success or 0 on failure or NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
