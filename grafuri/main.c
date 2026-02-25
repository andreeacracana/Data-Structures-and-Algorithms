#include <stdio.h>
#include <stdlib.h>
#include "grafuri.h"

int main()
{
   t_lista G[100];
   int n;
   int i;
   int s;


   printf("Introdu numarul de noduri: ");
   scanf("%d", &n);

   INITIALIZARE_LISTA_AD(G, n);

   for(i = 1; i <= n; i++){
    INSERARE_VECINI(G, n, i);
   }

    printf("Lista de adiacenta a grafului este: \n");
    PRINTARE_LISTA_AD(G , n);

    printf("Introdu un nod sursa: ");
    scanf("%d", &s);
    printf("Parcurgerea grafului in latime este: ");
    BFS(G, n, s);
    printf("\n");
    printf("Parcurgerea in adancime a grafului este: ");
    DFS(G, n ,s);

    return 0;
}
