#include <stdio.h>
#include "heapsort.h"

int main()
{
    int n;
    int A[100];

    printf("Introdu lungimea sirului: n = ");
    scanf("%d", &n);

    printf("Introdu elementele sirului:\n");
    READ_ARRAY(A, n);

    HEAP_SORT(A, n);

    printf("\nSirul sortat prin heapsort este: ");
    PRINT_ARRAY(A, n);

    return 0;
}
