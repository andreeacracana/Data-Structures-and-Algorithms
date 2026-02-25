#include <stdio.h>
#include "insert.h"

void READ_ARRAY(int V[], int N)
{
    int i;
    for (i = 1; i <= N; i++)
        scanf("%d", &V[i]);
}



void PRINT_ARRAY(int V[], int N)
{
    int i;
    for (i = 1; i <= N; i++)
        printf("%d ", V[i]);
}



void INSERTION_SORT(int A[], int N)
{
    int j;
    for (j = 2; j <= N; j++)
    {
        int key = A[j];
        int i = j - 1;
        while (i > 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}
