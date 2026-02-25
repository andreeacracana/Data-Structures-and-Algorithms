#include <stdio.h>
#include "quicksort.h"

void read_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int partition(int A[], int S, int D)
{
    int x = A[D];
    int i = S - 1;
    int aux;

    for (int j = S; j <= D - 1; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }

    aux = A[i + 1];
    A[i + 1] = A[D];
    A[D] = aux;

    return i + 1;
}

void quick_sort(int A[], int S, int D)
{
    int q = 0;

    if (S < D)
    {
        q = partition(A, S, D);
        quick_sort(A, S, q - 1);
        quick_sort(A, q + 1, D);
    }
}
