#ifndef SORT_H
#define SORT_H

#include <stdbool.h>


bool isSorted(int a[], int n);
void printArray(int a[], int n);

void insertSort(int a[], int n);

void merge(int a[], int *tmpArray, int leftPos, int rightPos, int rightEnd);
void mergeSort(int a[], int n);
void mSort(int a[], int *tmpArray, int left, int right);
int partition(int a[], int left, int right);
void exch(int a[], int i, int j);

#endif