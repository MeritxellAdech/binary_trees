#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 *
 * @node: the given node
 * Return: 1 on success or 0 on failure or NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	return (0);
}
