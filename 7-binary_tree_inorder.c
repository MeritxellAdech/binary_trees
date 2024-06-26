#include "binary_trees.h"

/**
 * binary_tree_inorder - prints the nodes of a binary tree in inorder manner
 *
 * @tree: the given tree
 * @func: function pointer that prints the value of the node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
