#include "binary_trees.h"

/**
 * binary_tree_node -  create a node for the binary tree
 * 
 * @parent: the ancestor of the node
 * @value: the data assigned to the node
 * 
 * Return: a pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *node = NULL;

        node = malloc(sizeof(binary_tree_t));
        if (node == NULL)
                return (NULL);
        
        node->n = value;
        node->parent = parent;
        node->left = NULL;
        node->right = NULL;

        return (node);
}