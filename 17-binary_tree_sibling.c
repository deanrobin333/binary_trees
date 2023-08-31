#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 *        if node is NULL or parent is NULL, return NULL
 *        if node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if ((node != NULL) && (node->parent != NULL))
	{
		left = node->parent->left;
		right = node->parent->right;
	}
	/**
	 * if statement can also be written in one line
	 * return (left == node ? right : left);
	 */
	if (left == node)
		return (right);
	return (left);
}
