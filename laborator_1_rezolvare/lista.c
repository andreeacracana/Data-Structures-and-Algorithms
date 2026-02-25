#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void MAKENULL(t_lista *L) {
    L->head = NULL;
}

t_nod_lista* LIST_SEARCH(t_lista *L, char key[20])
{
   t_nod_lista *x = L->head;
   while(x != NULL && strcmp(x->cheie, key) != 0){
    x = x->next;
   }
   return x;
}

void LIST_INSERT(t_lista *L, t_nod_lista *x)
{
   x->next = L->head;
   x->prev = NULL;
   if(L->head != NULL){
    L->head->prev = x;
   }
   L->head = x;
}

void LIST_DELETE(t_lista *L, t_nod_lista *x) {
   if(x->prev != NULL){
    x->prev->next = x->next;
   }else{
   L->head = x->next;
   }
   if(x->next != NULL){
    x->next->prev = x->prev;
   }
   free(x);
}

void LIST_PRINT(t_lista *L) {
   t_nod_lista *x = L->head;
   while(x != NULL){
    printf("%s ", x->cheie);
    x = x->next;
   }
}

void LIST_FREE(t_lista *L) {
   t_nod_lista *x = L->head;
   while(x != NULL){
    t_nod_lista *temp = x->next;
    free(x);
    x = temp;
   }
   L->head = NULL;
}
