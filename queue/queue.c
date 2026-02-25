#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void INITIALIZARE_QUEUE(COADA *Q, int q_size)
 {
    Q->data = (int*)malloc(q_size * sizeof(int));
    Q->head = 0;
    Q->tail = 0;
    Q->length = 0;
    Q->size = q_size;
}

void FREE_QUEUE(COADA *Q)
{
    free(Q->data);
    Q->data = NULL;
    Q->head = -1;
    Q->tail = -1;
    Q->length = 0;
}

void ENQUEUE(COADA *Q, int elem) {
    if (Q->length == Q->size) {
        printf("Coada este plină!\n");
        return;
    }
    Q->data[Q->tail] = elem;
    Q->tail = (Q->tail + 1) % Q->size;
    Q->length++;
}

int DEQUEUE(COADA *Q)
 {
    if (QUEUE_EMPTY(Q)) {
        printf("Coada este goala!\n");
        return -1;
    }
    int elem = Q->data[Q->head];
    Q->head = (Q->head + 1) % Q->size;
    Q->length--;
    return elem;
}

bool QUEUE_EMPTY(COADA *Q)
 {
    return (Q->length == 0);
}

void PRINT_QUEUE(COADA *Q)
 {
    if (QUEUE_EMPTY(Q))
    {
        printf("Coada este goala.\n");
        return;
    }
    printf("Elementele din coada: ");
    for (int i = 0; i < Q->length; i++)
    {
        int index = (Q->head + i) % Q->size;
        printf("%d ", Q->data[index]);
    }
    printf("\n");
}
