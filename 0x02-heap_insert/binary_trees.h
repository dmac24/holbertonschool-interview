#ifndef LISTS_H
#define LISTS_H

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t;

/* function that creates a binary tree node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Prints a binary tree*/
void binary_tree_print(const binary_tree_t *tree);


heap_t *swap_node(heap_t *node, int value, int side);
heap_t *heap_insert(heap_t **root, int value);

#endif /* LISTS_H */