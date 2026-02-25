#ifndef 2_H_INCLUDED
#define 2_H_INCLUDED
#define INF 100000

enum {white, gray, black} color;

typedef struct nod_lista{
   int cheie;
   struct nod_lista *next, *prev;
}t_nod_lista;

typedef struct lista{
   t_nod_lista *head;
}t_lista;

typedef struct coada{
  int valoare[100];
  int head, tail;
}t_coada;

void MAKENULL(t_lista *L);
void INITIALIZARE_LISTA_AD(t_lista G[], n);
void INSERARE_IN_LISTA(t_lista *L, t_nod_lista *x);
void INSERARE_VECINI(t_lista G[], int n, int s);
void PRINTARE_LISTA_AD(t_lista G[], int n);

void INITIALIZARE_COADA(t_coada *Q);
void ENQUEUE(t_coada *Q, int x);
int DEQUEUE(t_coada *Q);
int IS_EMPTY(t_lista *Q);

void BFS(t_lista G[], int n, int s);

#endif // 2_H_INCLUDED
