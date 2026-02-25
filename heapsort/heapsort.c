#include <stdio.h>
#include "heapsort.h"

int HEAP_SIZE = 0;

int LEFT(int x)
{
    return 2 * x;
}



int RIGHT(int x)
{
    return 2 * x + 1;
}



void MAX_HEAPIFY(int A[], int x)
{
    int left = LEFT(x);
    int right = RIGHT(x);
    int largest;

    if (left <= HEAP_SIZE && A[left] > A[x])

        largest = left;
    else
        largest = x;

    if (right <= HEAP_SIZE && A[right] > A[largest])
        largest = right;

    if (largest != x)
        {
        int tmp = A[x];
        A[x] = A[largest];
        A[largest] = tmp;

        MAX_HEAPIFY(A, largest);
    }
}



void BUILD_MAX_HEAP(int A[], int n)
 {
    HEAP_SIZE = n;
    for (int i = n / 2; i >= 1; i--) {
        MAX_HEAPIFY(A, i);
    }
}



void HEAP_SORT(int A[], int n)
 {
    BUILD_MAX_HEAP(A, n);

    for (int i = n; i >= 2; i--)
    {
        int tmp = A[1];
        A[1] = A[i];
        A[i] = tmp;

        HEAP_SIZE = HEAP_SIZE - 1;
        MAX_HEAPIFY(A, 1);
    }
}



void READ_ARRAY(int A[], int n)
 {
    for (int i = 1; i <= n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
}




void PRINT_ARRAY(int A[], int n)
 {
    for (int i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
