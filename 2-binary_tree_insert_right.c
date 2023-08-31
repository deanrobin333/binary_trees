#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in new node
 * Return: pointer to created node
 *        or NULL on failure or if parent is NULL
 * right-child present in parent replaced by new node and
 *        becomes right child of new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;

	if (parent != NULL)
	{
		created_node = malloc(sizeof(binary_tree_t));
		if (created_node != NULL)
		{
			created_node->right = parent->right;
			created_node->left = NULL;
			created_node->parent = parent;
			created_node->n = value;
			if (parent->right != NULL)
			{
				parent->right->parent = created_node;
			}
			parent->right = created_node;
		}
	}
	return (created_node);
}
