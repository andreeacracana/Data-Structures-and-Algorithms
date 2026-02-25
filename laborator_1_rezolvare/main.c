#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main() {
    t_lista L;
    t_nod_lista *x;
    int s = -1;
    char key[20];

    MAKENULL(&L);

    while (s != 0)
        {
        printf("1=INSERT, 2=SEARCH, 3=DELETE, 4=PRINT, 0=EXIT: ");
        scanf("%d", &s);

        switch (s)
        {

            case 1:
                x = (t_nod_lista*)malloc(sizeof(t_nod_lista));
                printf("Cheie: ");
                scanf("%s", x->cheie);
                LIST_INSERT(&L, x);
                break;

            case 2:
                printf("Cheie cautata: ");
                scanf("%s", &key);
                x = LIST_SEARCH(&L, key);
                if (x != NULL)
                    printf("Gasit: %s\n", x->cheie);
                else
                    printf("Cheie negasita\n");
                break;

            case 3:
                printf("Cheie de sters: ");
                scanf("%s", &key);
                x = LIST_SEARCH(&L, key);
                if (x != NULL)
                    LIST_DELETE(&L, x);
                else
                    printf("Cheie negasita\n");
                break;

            case 4:
                LIST_PRINT(&L);
                break;
        }
    }

    LIST_FREE(&L);

    return 0;
}
