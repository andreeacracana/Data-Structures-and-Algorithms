#include <stdio.h>
#include <stdlib.h>
#include "tabela.h"

int main()
{
    int m;
    int k;

    printf("Introdu dimensiunea tabelei: ");
    scanf("%d", &m);

    int T[m];

    INIT_HASHTABLE(T, m);

    printf("Introduceti elementele tabelei pana la citirea 0: ");
    scanf("%d", &k);
    while(k != 0){
       int j = HASHTABLE_INSERT(T, k, m);
        printf("Introdu urmatorul element: ");
        scanf("%d", &k);
    }

    printf("Tabela de dispersie este: ");
    HASHTABLE_PRINT(T, m);

    return 0;
}
