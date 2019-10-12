#include<stdio.h>
#include "maxsum.h"
#define ARRAY_LEN 8

int main(int argc, char const *argv[])
{
    int maxSum;
    int a[] ={4, -3, 5, -2, -1, 2, 6, -2};
   
    maxSum = maxSubSum1(a, ARRAY_LEN);
   
    return 0;
}
