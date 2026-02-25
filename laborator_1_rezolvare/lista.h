#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct nod_lista {
    char cheie[20];
    struct nod_lista *next, *prev;
} t_nod_lista;

typedef struct {
    t_nod_lista *head;
} t_lista;

void MAKENULL(t_lista *L);

t_nod_lista* LIST_SEARCH(t_lista *L, char key[20]);

void LIST_INSERT(t_lista *L, t_nod_lista *x);

void LIST_DELETE(t_lista *L, t_nod_lista *x);

void LIST_PRINT(t_lista *L);

void LIST_FREE(t_lista *L);

#endif // LISTA_H_INCLUDED
