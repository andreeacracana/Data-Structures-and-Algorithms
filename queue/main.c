#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main()
{
    COADA Q;
    int q_size;
    int element;
    int optiune;

    printf("Introduceti dimensiunea cozii: ");
    scanf("%d", &q_size);
    INITIALIZARE_QUEUE(&Q, q_size);

    while(1>0)
        {
        printf("\n----- MENIU COADA -----\n");
        printf("1. Adauga element\n");
        printf("2. Sterge element\n");
        printf("3. Printare coada\n");
        printf("4. Verifica daca e goala\n");
        printf("5. Iesire din program\n");
        printf("Alege optiunea: ");
        scanf("%d", &optiune);
    printf("\n");

        switch (optiune)
        {
            case 1:
                printf("Introduceti elementul de adaugat: ");
                scanf("%d", &element);
                ENQUEUE(&Q, element);
                break;

            case 2:
                element = DEQUEUE(&Q);//punem in variabila element valoarea returnata de dequeue ca sa o putem afisa
                if (element != -1)//daca coada nu este goala
                    printf("Element extras: %d\n", element);
                break;

            case 3:
                PRINT_QUEUE(&Q);
                break;

            case 4:
                if (QUEUE_EMPTY(&Q))
                    printf("Coada este goala\n");
                else
                    printf("Coada NU este goala\n");
                break;

            case 5:
                FREE_QUEUE(&Q);
                exit(0);//iese din program
                break;

            default:
                printf("Optiune invalida!\n");
        }

    }

    return 0;
}
