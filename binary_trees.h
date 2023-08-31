#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Stores recursively each level in an array of strings */
void binary_tree_print(const binary_tree_t *);

/* New node -- 0-binary_tree_node.c */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Insert left -- 1-binary_tree_insert_left.c */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Insert right -- 2-binary_tree_insert_right.c */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Delete -- 3-binary_tree_delete.c */
void binary_tree_delete(binary_tree_t *tree);

/* Is leaf -- 4-binary_tree_is_leaf.c */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Is root -- 5-binary_tree_is_root.c */
int binary_tree_is_root(const binary_tree_t *node);

/* Pre-order traversal -- 6-binary_tree_preorder.c */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* In-order traversal -- 7-binary_tree_inorder.c */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Post-order traversal -- 8-binary_tree_postorder.c */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Height -- 9-binary_tree_height.c */
size_t binary_tree_height(const binary_tree_t *tree);

/* Depth -- 10-binary_tree_depth.c */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Size -- 11-binary_tree_size.c */
size_t binary_tree_size(const binary_tree_t *tree);

/* Leaves -- 12-binary_tree_leaves.c */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Nodes -- 13-binary_tree_nodes.c */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Balance factor -- 14-binary_tree_balance.c */
int binary_tree_balance(const binary_tree_t *tree);

/* Is full -- 15-binary_tree_is_full.c */
int binary_tree_is_full(const binary_tree_t *tree);

/* Is perfect -- 16-binary_tree_is_perfect.c */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Sibling -- 17-binary_tree_sibling.c */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Uncle -- 18-binary_tree_uncle.c */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);


/** HELPER FUNCTIONS **/

/* Height -- 9-binary_tree_height.c */
/* Balance factor -- 14-binary_tree_balance.c */
void calc_height(const binary_tree_t *tree, size_t n, size_t *height);

/* Nodes -- 13-binary_tree_nodes.c */
int is_leaf(const binary_tree_t *node);

/* Is perfect -- 16-binary_tree_is_perfect.c */
void tree_stats(const binary_tree_t *tree, size_t n,
		size_t *leaves, size_t *height);

#endif /* _BINARY_TREES_H_ */
