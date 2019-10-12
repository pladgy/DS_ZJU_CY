#include "heap.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
   MaxHeap heap;
    int n, m;
    printf("Please input node number:\n");
    scanf("%d", &n);
    heap = CreateHeap(n);
    printf("Please input nodes:\n");
    for (int i = 0; i < n; i++)
    {        
        scanf("%d", &m);
        Insert(heap, m);
    }

    do
    {
        printf("Please input the path subscript. 0 to exit:\n");
        scanf("%d", &m);
        while (m > 0)
        {
            printf("%d ", heap->Data[m]);
            m /= 2;
        }
        printf("\n");
    } while (m > 0);
    return 0;
}
