#include <stdio.h>
#include "stack.h"

int main() {
    STIVA s;
    int e = -1;//variabila in care citim valorile de la utilizator
    //este -1 doar ca sa aiba o valoare definita

    INITIALIZARE_STACK(&s, 20);//am initialiat functia

    printf("Introdu valori pozitive (0 pentru a opri programul):\n");
    while (1) {//creaza un ciclu infinit
        printf("e = ");
        scanf("%d", &e);
        if (e == 0) break;//opreste bucla
        PUSH(&s, e);
        PRINT_STACK(&s);
    }

    while (!STACK_EMPTY(&s)) {//atata timp cat stiva nu este goala
        POP(&s);
        PRINT_STACK(&s);
    }

    FREE_STACK(&s);
    return 0;
}
