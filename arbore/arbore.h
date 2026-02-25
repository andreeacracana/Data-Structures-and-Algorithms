#ifndef ARBORE_H_INCLUDED
#define ARBORE_H_INCLUDED

typedef struct nod_arbore{
   int cheie;
   struct nod_arbore *left, *right, *parent;
}t_nod_arbore;

typedef struct arbore{
   t_nod_arbore *root;
}t_arbore;

t_nod_arbore* MAKE_ROOT(t_arbore *T, int cheie);
t_nod_arbore* CREATE_NODE(int cheie);
void TREE_INSERT(t_arbore *T, t_nod_arbore *n);
void INORDER_WALK(t_nod_arbore *x);
t_nod_arbore* SEARCH_NODE(t_nod_arbore *x, int cheie);

bool IS_BSTU(t_nod_arbore *n, int min , int max);
bool IS_BST(t_nod_arbore *n);

#endif // ARBORE_H_INCLUDED
