#include <stdio.h>
#include "hashtable.h"

void HASH_INITIALIZARE(int T[], int M)
 {
    for(int j = 0; j < M; j++)
        T[j] = -1;
}



int HASH_PRIMAR(int K, int M)
 {
    return K % M;
}



int HASH_PROBARE_LINIARA(int K, int i, int M)
 {
    return (HASH_PRIMAR(K, M) + i) % M;
}



int HASH_INSERARE(int T[], int K, int M)
 {
    int i = 0, j;
    do {
        j = HASH_PROBARE_LINIARA(K, i, M);
        if(T[j] == -1) {
            T[j] = K;
            return j;
        } else {
            i++;
        }
    } while(i < M);
    return -1;
}



int HASH_CAUTARE(int T[], int K, int M)
{
    int i = 0, j;
    do {
        j = HASH_PROBARE_LINIARA(K, i, M);
        if(T[j] == K)
            return j;
        i++;
    } while(i < M && T[j] != -1);
    return -1;
}



int HASH_STERGERE(int T[], int K, int M)
{
    int j = HASH_CAUTARE(T, K, M);
    if(j > -1) {
        T[j] = -1;
        return j;
    }
    return -1;
}



void HASH_PRINTARE(int T[], int M)
{
    for(int j = 0; j < M; j++)
        printf("%d ", T[j]);
    printf("\n");
}

