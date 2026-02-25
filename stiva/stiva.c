#include <stdio.h>
#include <stdlib.h>
#include "stiva.h"

void INITIALIZARE_STACK(STIVA *s, int init_size)
{
    s->data = (int*)malloc(init_size * sizeof(int));
    s->size = init_size;
    s->top = 0;
}

void FREE_STACK(STIVA *s)
{
    free(s->data);
    s->data = NULL;
    s->top = -1;
}

int STACK_EMPTY(STIVA s)
{
    return (s.top == 0);//am pus . in loc de -> deoarece aici s nu este un pointer, ci o copie a structurii stiva, am trimis structura prin valoare, nu adresa
}

void PUSH(STIVA *s, int e)
 {
    if (s->top == s->size) {
        printf("Stiva este plina!\n");
        return;
    }
    s->top++;
    s->data[s->top] = e;
}

int POP(STIVA *s)
 {
    if (STACK_EMPTY(*s)) {
        printf("Stiva este goala.\n");
        return -1;
    } else {
        int e = s->data[s->top];
        s->data[s->top] = 0;
        s->top--;
        return e;
    }
}

void PRINT_STACK(STIVA s)
{
    if (STACK_EMPTY(s)) {
        printf("Stiva este goala.\n");
        return;
    }
    printf("Elementele stivei: ");
    for (int i = 1; i <= s.top; i++)
        printf("%d ", s.data[i]);
    printf("\n");
}
