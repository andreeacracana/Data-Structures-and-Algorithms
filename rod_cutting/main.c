#include <stdio.h>
#include "rodcut.h"

int main() {
    int n;

    printf("Introduceti lungimea barei: ");
    scanf("%d", &n);

    int p[n + 1];

    printf("Introduceti preturile p[i] pentru i=1..%d:\n", n);
    read_prices(p, n);

    int maxvalue;

    maxvalue = cut_rod(p, n);
    printf("\nMax value (recursiv): %d\n", maxvalue);

    maxvalue = memoized_cut_rod(p, n);
    printf("\nMax value (top-down): %d\n", maxvalue);

    maxvalue = bottom_up_cut_rod(p, n);
    printf("\nMax value (bottom-up): %d\n", maxvalue);

    return 0;
}
