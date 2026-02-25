#include "stack.h"


//initializarea stivei
void INITIALIZARE_STACK(STIVA *S, int dimensiune_initiala) {
    S->data = malloc(dimensiune_initiala * sizeof(int));//ii aloca memorie dinamic in calculator stivei care contine un vector de intregi cu dimensiunea initiala
    S->size = dimensiune_initiala;//initializeaza dimensiunea stivei cu valoarea adaugata de utilizator
    S->top = 0;//setam pozitia de sus a stivei cu 0 deoarece lista este goala (top = nr elemente)
}



//eliberarea memoriei stivei
void FREE_STACK(STIVA *S) {//primeste ca parametru adresa stivei
    free(S->data);//elibereaza memoria alocata anterior cu malloc, memoria unde erau stocate elementele stivei devine disponibila pt sistem
    S->data = NULL;//pointerul catre primul element nu mai contine nicio adresa de memorie =>memorie eliberata
    S->top = -1;//semnal ca stiva nu mai este valida, nu mai are elemente
}


//verifica daca functia este goala
bool STACK_EMPTY(STIVA *S) {
    return (S->top == 0);//daca numarul de elemente din stiva este 0 , returneaza true
}



//adaugarea unui element in stiva
void PUSH(STIVA *S, int E) {//primeste ca parametrii adresa stivei si elementul nou de adaugat
    if (S->top >= S->size) {//daca numarul de elemente din stiva este egal cu numarul maxim de elemente pe care le poate avea stiva
        printf("Stiva este plina!\n");
        return;
    }
    S->data[S->top++] = E;//pune elementul E pe prima pozitie libera din stiva
}


//scoaterea unui element din stiva si returnarea acestuia
int POP(STIVA *S) {
    if (STACK_EMPTY(S)) {
        printf("Stiva e goala!\n");
        return -1;//valoare speciala de eroare, nu s a putut returna nimic
    }
    int e = S->data[--S->top];//accesam ultimul element introdus in stiva si il salvam intr o variabila e pt a-l putea returna
    S->data[S->top] = 0;//ultima pozitie din stiva devine goala, valoarea este resetata la 0
    return e;//returneaza elementul sters
}



//printarea stivei
void PRINT_STACK(STIVA *S) {
    printf("Continut stiva: ");
    for (int i = 0; i < S->top; i++) {//traverseaza stiva
        printf("%d ", S->data[i]);//printeaza elementele parcurse
    }
    printf("\n");
}

