#include "binary_trees.h"

/**
 * calc_height - function that computes the height of a binary tree's node.
 * @tree: pointer to the root node of the tree to measure the height.
 * @n: accumulated height.
 * @height: pointer to the maximum height in the node's tree.
 *
 * Return: void.
 * Same function used in "Height -- 9-binary_tree_height.c"
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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: measured balance or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t bal_factor = 0, l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);
	calc_height(tree->left, 1, &l_height);
	calc_height(tree->right, 1, &r_height);
	bal_factor = l_height - r_height;

	return (bal_factor);
}
