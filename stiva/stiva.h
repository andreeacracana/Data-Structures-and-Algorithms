#ifndef STIVA_H_INCLUDED
#define STIVA_H_INCLUDED

typedef struct {
    int *data;
    int top;
    int size;
} STIVA;

void INITIALIZARE(STIVA *s, int dimensiune_initiala);
void FREE_STACK(STIVA *s);
int STACK_EMPTY(STIVA s);
void PUSH(STIVA *s, int e);
int POP(STIVA *s);
void PRINT_STACK(STIVA s);

#endif // STIVA_H_INCLUDED
