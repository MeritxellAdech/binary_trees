#include "binary_trees.h"

/**
 * binary_tree_insert_left - the direct left child of its parent
 *
 * @parent: The parent node
 * @value: the data assigned to the node
 *
 * Return: the address of the create node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (parent->left)
	{
		node->left = parent->left;
		/* Making the new node the parent of the original left child of parent*/
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
