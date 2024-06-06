#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the values of the nodes
 *
 * @tree: the given tree
 * @func: prints the value assigned to the node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
