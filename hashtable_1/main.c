#include <stdio.h>
#include "hashtable.h"

int main() {
    int M, T[100];
    int opt, k, j;

    printf("Introdu dimensiunea tabelei: ");
    scanf("%d", &M);
    HASH_INITIALIZARE(T, M);

    do {
        printf("\n----- MENIU -----\n");
        printf("1. Inserare cheie\n");
        printf("2. Cautare cheie\n");
        printf("3. Stergere cheie\n");
        printf("4. Afisare tabela\n");
        printf("0. Iesire\n");
        printf("Optiunea: ");
        scanf("%d", &opt);

        switch(opt) {

            case 1: //inserare
                printf("Cheia de inserat: ");
                scanf("%d", &k);
                j = HASH_INSERARE(T, k, M);
                if(j > -1)//daca functia nu returneaza -1 inseamna ca inserarea a reusit
                    printf("Cheia %d inserata la pozitia %d\n", k, j);
                else
                    printf("Tabela este plina! Inserare imposibila.\n");
                break;

            case 2: // cautare
                printf("Cheia de cautat: ");
                scanf("%d", &k);
                j = HASH_CAUTARE(T, k, M);
                if(j > -1)
                    printf("Cheia %d gasita la pozitia %d\n", k, j);
                else
                    printf("Cheia %d nu exista in tabela.\n", k);
                break;

            case 3: // stergere
                printf("Cheia de sters: ");
                scanf("%d", &k);
                j = HASH_STERGERE(T, k, M);
                if(j > -1)
                    printf("Cheia %d stearsa din pozitia %d\n", k, j);
                else
                    printf("Cheia %d nu se afla in tabela.\n", k);
                break;

            case 4: // afisare
                printf("Tabela curenta:\n");
                HASH_PRINTARE(T, M);
                break;

            case 0:
                printf("Program incheiat.\n");
                break;

            default:
                printf("Optiune invalida!\n");
                break;
        }

    } while(opt != 0);

    return 0;
}
