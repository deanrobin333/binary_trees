#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the no. of leaves.
 * Return: number of leaves else 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, total;

	if (tree == NULL)
		return (0);
	/**
	 * check if supplied node has left and right subtrees
	 * if it doesnt have, then the node is a leaf.
	 *
	 * leaf is a node without any left or right subtrees
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/**
	 * we now call recursive function to check for leaf.
	 * assigning the pointer to the left and right substree
	 * so that we check if those subtrees are leafs
	 */

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	/**
	 * we now assign the total.
	 * since the parent can not be a leaf, we dont add 1.
	 */
	total = left + right;

	return (total);
}
