#include <stdio.h>
#include "insert.h"

int main()
{
    int n, a[101];

    printf("Introdu numarul de elemente n = ");
    scanf("%d", &n);

    printf("Introdu elementele sirului:\n");
    READ_ARRAY(a, n);
    INSERTION_SORT(a, n);

    printf("Sirul sortat este: ")
    PRINT_ARRAY(a, n);

    return 0;
}
