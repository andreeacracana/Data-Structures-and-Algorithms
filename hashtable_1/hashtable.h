#ifndef HASH_H
#define HASH_H

void HASH_INITIALIZARE(int T[], int M);
int HASH_PRIMAR(int K, int M);
int HASH_PROBARE_LINIARA(int K, int i, int M);
int HASH_INSERARE(int T[], int K, int M);
int HASH_CAUTARE(int T[], int K, int M);
int HASH_STERGERE(int T[], int K, int M);
void HASH_PRINTARE(int T[], int M);

#endif
