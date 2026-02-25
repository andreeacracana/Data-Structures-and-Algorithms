#include <stdio.h>
#include "rb.h"

int main()
{
    rb_tree T;
    T.root = NULL;
    int x;

    printf("ROOT = ");
    scanf("%d", &x);

    rb_node *r = MAKE_ROOT(&T, x);

    printf("Introduceti x pana la citirea lui 0:\n");
    scanf("%d", &x);

    while(x != 0)
        {
        rb_node *n = CREATE_NODE(x);
        RB_INSERT(&T, n);
        scanf("%d", &x);
    }

    printf("In-order walk:\n");
    INORDER_WALK(T.root);
    printf("\n");

    printf("Cauta nod cu cheia x = ");
    scanf("%d", &x);

    rb_node *res = TREE_SEARCH(&T, T.root, x);
    if(res != NULL)
        printf("Nodul cu cheia %d gasit\n", res->key);
    else
        printf("Nodul nu a fost gasit\n");

    return 0;
}
