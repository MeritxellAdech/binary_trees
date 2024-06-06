#include "binary_trees.h"

/**
 * binary_tree_preorder - prints the values of given tree
 * from the root to the left most node
 *
 * @tree: the given tree
 * @func: the value to be printed
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
