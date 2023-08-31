#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *temp_node = NULL;

	if (tree != NULL)
	{
		temp_node = tree->parent;
		while (temp_node != NULL)
		{
			depth++;
			temp_node = temp_node->parent;
		}
	}
	return (depth);
}
