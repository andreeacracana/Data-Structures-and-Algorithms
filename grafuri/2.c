#include <stdio.h>
#include <stdlib.h>
#include "2.h"

void MAKENULL(t_lista *L){
  L->head = NULL;
}

void INITIALIZARE_LISTA_AD(t_lista G[], int n){
  for ( int i = 1; i <= n ; i++){
    MAKENULL(&G[i]);
  }
}

void INSERARE_IN_LISTA(t_lista *L, t_nod_lista *x){
   x->next = L->head;
   x->prev = NULL;

   if(L->head != NULL){
    L->head->prev = x;
   }
   L->head = x;
}

void INSERARE_VECINI(t_lista G[], int n, int s){
   int v;
   int i;
   printf("Introdu vecinii nodului sursa %d", s);

   do{
    printf("Vecin: ");
    scanf("%d", &v);

    if(v > 0 && v < n && v != s){
        t_nod_lista *x = malloc(sizeof(t_nod_lista));
        x->cheie = v;

        INSERARE_IN_LISTA(&G[s], x);
    }
   }while(v != 0);
}

void PRINTARE_LISTA_AD(t_lista G[], int n){
   int i;

   for(i = 1; i <= n; i++){
     t_nod_lista *x = G[i].head;
     printf("%d", i);

     while(x != NULL){
     printf("->[%d]", x->cheie)
     x = x->next;
     }
   }
}

void INITIALIZARE_COADA(t_coada *Q){
   Q->head = 0;
   Q->tail = -1;
}

void ENQUEUE(t_coada *Q, int x){
   Q->tail++;
   Q->valoare[Q->tail] = x;
}

int DEQUEUE(t_coada *Q){
   x = Q->valoare[Q->head];
   Q->head++;
   return x;
}

int IS_EMPTY(t_lista *Q){
  return Q->head > Q->tail;
}

void BFS(t_lista G[], int n, int s){
   int u,v,i;
   int color[100];
   int d[100];
   int prev[100];

   t_coada Q;
   INITIALIZARE_COADA(&Q);

   for(u = 1; u <= n; u++){
    color[u] = white;
    d[u] = INF;
    prev[u] = -1;
   }
   color[s] = gray;
   d[s] = 0;
   prev[s] = -1;

   printf("%d", s);
   ENQUEUE(&Q, s);

   while(!IS_EMPTY(&Q)){
    DEQUEUE(&Q);
    t_nod_lista *x = G[i].head;

    while(x != NULL){
        v = x->cheie;
        if(color[v] == white){
            color[v] = gray;
            d[v] = d[u] + 1;
            prev[v] = u;

            printf("%d", v);
            ENQUEUE(&Q, v);
        }
        x = x->next;
    }
    color[u] = black;
   }
}
