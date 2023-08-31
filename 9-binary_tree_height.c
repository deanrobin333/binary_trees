#include "binary_trees.h"

/**
 * calc_height - function that computes the height of a binary tree's node.
 * @tree: pointer to the root node of the tree to measure the height.
 * @n: accumulated height.
 * @height: pointer to the maximum height in the node's tree.
 *
 * Return: void.
 */

void calc_height(const binary_tree_t *tree, size_t n, size_t *height)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (n > *height)
			{
				*height = n;
			}
		}
		else
		{
			calc_height(tree->left, n + 1, height);
			calc_height(tree->right, n + 1, height);
		}
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: size of height.
 *         0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	calc_height(tree, 0, &height);

	return (height);
}
