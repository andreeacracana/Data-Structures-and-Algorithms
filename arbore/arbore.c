#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include "arbore.h"

t_nod_arbore* MAKE_ROOT(t_arbore *T, int cheie){
   T->root = malloc(sizeof(t_nod_arbore));

   T->root->cheie = cheie;
   T->root->left = NULL;
   T->root->right = NULL;
   T->root->parent = NULL;

   return T->root;
}

t_nod_arbore* CREATE_NODE(int cheie){
   t_nod_arbore *n = malloc(sizeof(t_nod_arbore));

   n->cheie = cheie;
   n->left = NULL;
   n->right = NULL;
   n->parent = NULL;

   return n;
}

void TREE_INSERT(t_arbore *T, t_nod_arbore *n){
   t_nod_arbore *x = T->root;
   t_nod_arbore *y = NULL;

   while(x != NULL){
    y = x;

    if(n->cheie < x->cheie){
      x = x->left;
    }else{
    x = x->right;
    }
   }
   n->parent = y;

   if(y == NULL){
    T->root = n;
   }else if(n->cheie < y->cheie){
      y->left = n;
   }else{
      y->right = n;
   }
}

void INORDER_WALK(t_nod_arbore *x){
   if(x != NULL){
    INORDER_WALK(x->left);
    printf("%d ", x->cheie);
    INORDER_WALK(x->right);
   }
}


t_nod_arbore* SEARCH_NODE(t_nod_arbore *x, int cheie){
   while(x != NULL && x->cheie != cheie){
    if(cheie < x->cheie){
        x = x->left;
    }else{
        x = x->right;
    }
   }
   return x;
}

bool IS_BSTU(t_nod_arbore *n, int min , int max){
   if(n == NULL){
    return true;
   }

   if(n->cheie <= min || n->cheie >= max){
    return false;
   }

   return IS_BSTU(n->left, n->cheie, min) && IS_BSTU(n->right, n->cheie, max);
}

bool IS_BST(t_nod_arbore *n){
   return IS_BSTU(n, INT_MIN, INT_MAX);
}
