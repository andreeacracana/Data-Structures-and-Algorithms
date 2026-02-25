#include <stdio.h>
#include "matrici.h"

int main() {
    int n;
    int p[20];
    int m[20][20];
    int s[20][20];

    printf("Introduceti numarul de matrici: ");
    scanf("%d", &n);

    printf("Introduceti vectorul P[0..%d]:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("p[%d] = ", i);
        scanf("%d", &p[i]);
    }

    MATRIX_CHAIN_ORDER(p, n, m, s);

    printf("\nCost minim = %d\n", m[1][n]);

    printf("Parantezarea optima: ");
    PRINT_OPTIMAL_PARENS(s, 1, n);

    printf("\n");
    return 0;
}
