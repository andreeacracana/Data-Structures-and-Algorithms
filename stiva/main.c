#include <stdio.h>
#include <stdlib.h>
#include "stiva.h"

int main() {
    STIVA S;
    int dimensiune_initiala;
    int optiune;
    int valoare;
    int element_scos;

    printf("Introdu dimensiunea initiala a stivei: ");
    scanf("%d", &dimensiune_initiala);

    INITIALIZARE_STACK(&S, dimensiune_initiala);

    while(1>0)
    {

        printf("\n--- Meniu Stiva ---\n");
        printf("1. Inserare element\n");
        printf("2. Eliminare element\n");
        printf("3. Verifica daca stiva e goala\n");
        printf("3. Printare stiva\n");
        printf("4. Iesi din program\n");
        printf("Alege o optiune : ");
        scanf("%d", &optiune);

        switch (optiune)
        {
            case 1:
                printf("Valoare de inserat: ");
                scanf("%d", &valoare);
                PUSH(&S, valoare);
                break;

            case 2:
                element_scos = POP(&S);
                if (element_scos != -1) {
                    printf("Element scos: %d\n", element_scos);
                }
                break;

            case 3:
                PRINT_STACK(S);
                break;

            case 4:
               FREE_STACK(&S);
                exit(0);
                break;

            default:
                printf("Optiune invalida. Incearca din nou.\n");
        }

    }

    FREE_STACK(&S);
    return 0;
}
