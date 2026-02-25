#ifndef RB_H
#define RB_H

typedef enum { red, black } color_t;

typedef struct rb_node {
    int key;
    color_t color;
    struct rb_node *left, *right, *parent;
} rb_node;

typedef struct {
    rb_node *root;
} rb_tree;

rb_node* MAKE_ROOT(rb_tree *A, int key);
rb_node* CREATE_NODE(int key);
void LEFT_ROTATE(rb_tree *A, rb_node *x);
void RIGHT_ROTATE(rb_tree *A, rb_node *x);
void RB_INSERT(rb_tree *A, rb_node *z);
void RB_INSERT_FIXUP(rb_tree *A, rb_node *z);
rb_node* TREE_SEARCH(rb_tree *A, rb_node *x, int key);
void INORDER_WALK(rb_node *root);

#endif
