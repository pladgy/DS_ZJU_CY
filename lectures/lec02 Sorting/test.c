#include <stdio.h>
#include <assert.h>
#include "sort.h"
#define N 8



void printArray(int a[], int n);

int main(int argc, char const *argv[])
{
    int a[N] = {6, 4, 3, 8, 1, 5, 2, 7};
    insertSort(a, N);
    assert(isSorted(a, N));
    printArray(a, N);

    mergeSort(a, N);
    assert(isSorted(a, N));
    printArray(a, N);
    
    quickSort(a, N);
    assert(isSorted(a, N));
    printArray(a, N);

    return 0;
}


