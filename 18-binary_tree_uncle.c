#include "binary_trees.h"

/**
 * binary_tree_uncle - funds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node.
 *         if node is NULL, rturn NULL.
 *         if node has no uncle, return NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;
	binary_tree_t *parent = (node != NULL ? node->parent : NULL);

	if ((parent != NULL) && (parent->parent != NULL))
	{
		left = parent->parent->left;
		right = parent->parent->right;
	}
	/**
	 * if statement can also be written like
	 * return (left == parent ? right : left);
	 */
	if (left == parent)
		return (right);
	return (left);
}
