#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in new node
 * Return: pointer to created node
 *        or NULL on failure or if parent is NULL
 * left-child present in parent replaced by new node and
 *        becomes left child of new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;

	if (parent != NULL)
	{
		created_node = malloc(sizeof(binary_tree_t));
		if (created_node != NULL)
		{
			created_node->left = parent->left;
			created_node->right = NULL;
			created_node->parent = parent;
			created_node->n = value;
			if (parent->left != NULL)
			{
				parent->left->parent = created_node;
			}
			parent->left = created_node;
		}
	}
	return (created_node);
}
