#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to the root node of tree to measure
 *
 * Return: size of tree
 *         else if tree is NULL 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, total;

	if (tree == NULL)
		return (0);
	/**
	 * Recursively get size of left and right tree
	 */
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	/**
	 * We add 1 to account for the node itsself
	 * since left holds size of left subtree
	 * right holds size of right subtree
	 */
	total = left + right + 1;
	return (total);
}
