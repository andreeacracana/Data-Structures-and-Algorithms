#include <stdio.h>
#include "merge.h"

int main()
{
    int n, A[200];

    printf("Introdu numarul de elemente din sir n = ");
    scanf("%d", &n);

    printf("Introdu elementele sirului:\n");
    READ_ARRAY(A, n);

    MERGE_SORT(A, 1, n);

    printf("Sirul sortat este: ");
    PRINT_ARRAY(A, n);

    return 0;
}
