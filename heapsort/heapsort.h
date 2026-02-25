#ifndef HEAP_H
#define HEAP_H

extern int HEAP_SIZE;

void READ_ARRAY(int A[], int n);
void PRINT_ARRAY(int A[], int n);

void HEAP_SORT(int A[], int n);
void BUILD_MAX_HEAP(int A[], int n);
void MAX_HEAPIFY(int A[], int x);

int LEFT(int x);
int RIGHT(int x);

#endif
