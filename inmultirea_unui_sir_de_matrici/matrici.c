#include <stdio.h>
#include <limits.h>
#include "matrici.h"

void PRINT_OPTIMAL_PARENS(int s[][20], int i, int j)
{
    if (i == j) {
        printf("A%d", i);
    } else {
        printf("(");
        PRINT_OPTIMAL_PARENS(s, i, s[i][j]);
        PRINT_OPTIMAL_PARENS(s, s[i][j] + 1, j);
        printf(")");
    }
}



void MATRIX_CHAIN_ORDER(int p[], int n, int m[][20], int s[][20])
{
    int i, j, k, t, q;

    for (i = 1; i <= n; i++)
        m[i][i] = 0;

    for (t = 2; t <= n; t++) {
        for (i = 1; i <= n - t + 1; i++) {
            j = i + t - 1;
            m[i][j] = INT_MAX;

            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}
