#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include "arbore.h"

int main()
{
   t_arbore T;
   t_nod_arbore *n;
   t_nod_arbore *r;
   int x;
   int elm;
   int cheie;

   printf("Introdu cheia pentru nodul radacina: ");
   scanf("%d", &x);

   r = MAKE_ROOT(&T, x);

   printf("Introdu elementele arborelui pana la citirea 0: ");
   scanf("%d", &elm);

   while(elm != 0){
    n = MAKE_NODE(elm);
    INSERT_NODE(&T, n);
    printf("Introdu un alt element: ");
    scanf("%d", &elm);
   }

   printf("Parcugerea arborelui in-order este: ");
   INORDER_WALK(r);
   printf("\n");


   if(IS_BST(r)){
    printf("Arborele este binar de cautare");
   }else{
   printf("Arborele nu este binar de cautare");
   }

   printf("Introdu o cheie pentru cautare: ");
   scanf("%d", &cheie);
   n = SEARCH_NODE(r, cheie);
   if(n != NULL){
    printf("Nodul a fost gasit");
   }else{
   printf("Nodul nu a fost gasit");
   }


    return 0;
}
