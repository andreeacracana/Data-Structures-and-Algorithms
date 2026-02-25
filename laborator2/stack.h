#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *data;//un pointer catre un tablou de intregi, adica zona de memorie unde sunt pastrate valorile stivei
    int top;//indicele pozitiei de sus, urmatoarea pozitie libera
    int size;//dimensiunea maxima a stivei, nr total de elemente
} STIVA;

void INITIALIZARE_STACK(STIVA *S, int dimensiune_initiala);
void FREE_STACK(STIVA *S);
bool STACK_EMPTY(STIVA *S);
void PUSH(STIVA *S, int E);
int POP(STIVA *S);
void PRINT_STACK(STIVA *S);




#endif // STACK_H_INCLUDED
