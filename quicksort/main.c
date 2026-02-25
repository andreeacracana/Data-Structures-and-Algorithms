#include <stdio.h>
#include "quicksort.h"

int main()
 {
    int n;
    int a[100];

    printf("Introdu lungimea sirului: n = ");
    scanf("%d", &n);

    printf("\nIntrodu elementele sirului:\n");
    read_array(a, n);

    quick_sort(a, 0, n - 1);//vectorul, prima pozitie si ultima pozitie

    printf("\nSirul sortat prin quicksort este: ");
    print_array(a, n);

    return 0;
}
