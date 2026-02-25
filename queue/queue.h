#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdbool.h>

typedef struct {
    int *data;
    int head;
    int tail;
    int length;
    int size;
} COADA;

void INITIALIZARE_QUEUE(COADA *Q, int init_size);
void FREE_QUEUE(COADA *Q);
void ENQUEUE(COADA *Q, int elem);
int  DEQUEUE(COADA *Q);
bool QUEUE_EMPTY(COADA *Q);
void PRINT_QUEUE(COADA *Q);


#endif // QUEUE_H_INCLUDED
