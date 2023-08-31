#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: a pointer to check
 * Return: 1 if node is root
 *        0 if node is not root, or node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
