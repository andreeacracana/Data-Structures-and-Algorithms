#include <stdio.h>
#include <stdlib.h>
#include "rb.h"

rb_node* MAKE_ROOT(rb_tree *A, int key)
 {
    A->root = (rb_node*)malloc(sizeof(rb_node));
    A->root->key = key;
    A->root->left = A->root->right = NULL;
    A->root->parent = NULL;
    A->root->color = black;
    return A->root;
}



rb_node* CREATE_NODE(int key)
{
    rb_node *n = (rb_node*)malloc(sizeof(rb_node));
    n->key = key;
    n->left = n->right = NULL;
    n->parent = NULL;
    n->color = red;
    return n;
}



void LEFT_ROTATE(rb_tree *A, rb_node *x)
 {
    rb_node *y = x->right;
    x->right = y->left;

    if(y->left != NULL)
     y->left->parent = x;
     y->parent = x->parent;

    if(x->parent == NULL)
        A->root = y;
    else
    if(x == x->parent->left)
        x->parent->left = y;
    else
        x->parent->right = y;

    y->left = x;
    x->parent = y;
}



void RIGHT_ROTATE(rb_tree *A, rb_node *x)
{
    rb_node *y = x->left;
    x->left = y->right;
    if(y->right != NULL)
        y->right->parent = x;

    y->parent = x->parent;

    if(x->parent == NULL)
        A->root = y;
    else
     if(x == x->parent->right)
        x->parent->right = y;
    else
        x->parent->left = y;

    y->right = x;
    x->parent = y;
}



void RB_INSERT(rb_tree *A, rb_node *z)
 {
    rb_node *y = NULL;
    rb_node *x = A->root;

    while(x != NULL)
        {
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }

    z->parent = y;
    if(y == NULL)
        A->root = z;
    else
     if(z->key < y->key)
        y->left = z;
    else
        y->right = z;

    z->left = z->right = NULL;
    z->color = red;

    RB_INSERT_FIXUP(A, z);
}



void RB_INSERT_FIXUP(rb_tree *A, rb_node *z)
 {
    while(z->parent != NULL && z->parent->color == red)
        {
        if(z->parent == z->parent->parent->left) {
            rb_node *y = z->parent->parent->right;

            if(y != NULL && y->color == red) {
                z->parent->color = black;
                y->color = black;
                z->parent->parent->color = red;
                z = z->parent->parent;
            } else {
                if(z == z->parent->right) {
                    z = z->parent;
                    LEFT_ROTATE(A, z);
                }
                z->parent->color = black;
                z->parent->parent->color = red;
                RIGHT_ROTATE(A, z->parent->parent);
            }
        } else {
            rb_node *y = z->parent->parent->left;

            if(y != NULL && y->color == red) {
                z->parent->color = black;
                y->color = black;
                z->parent->parent->color = red;
                z = z->parent->parent;
            } else {
                if(z == z->parent->left) {
                    z = z->parent;
                    RIGHT_ROTATE(A, z);
                }
                z->parent->color = black;
                z->parent->parent->color = red;
                LEFT_ROTATE(A, z->parent->parent);
            }
        }
    }
    A->root->color = black;
}



rb_node* TREE_SEARCH(rb_tree *A, rb_node *x, int key)
{
    if(x == NULL || key == x->key)
        return x;
    if(key < x->key)
        return TREE_SEARCH(A, x->left, key);
    return TREE_SEARCH(A, x->right, key);
}



void INORDER_WALK(rb_node *root)
{
    if(root != NULL) {
        INORDER_WALK(root->left);
        printf("%d ", root->key);
        INORDER_WALK(root->right);
    }
}
