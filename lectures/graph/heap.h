#ifndef _HEAP_H_
#define _HEAP_H_

#include <stdbool.h>

typedef struct element HeapElementType;
struct element{
    int sub;
    int cost;
};
typedef struct HNode *Heap; /* 堆的类型定义 */
struct HNode
{
    HeapElementType *Data; /* 存储元素的数组 */
    int Size;          /* 堆中当前元素个数 */
    int Capacity;      /* 堆的最大容量 */
};
typedef Heap MaxHeap; /* 最大堆 */
typedef Heap MinHeap; /* 最小堆 */

#define MAXDATA 1000 /* 该值应根据具体情况定义为大于堆中所有可能元素的值 */
#define MINDATA -1

MinHeap CreateHeap( int MaxSize );  //：创建一个空的最大堆。
bool IsHeapFull( MinHeap H );    //：判断最大堆H是否已满。
bool Insert( MinHeap H, HeapElementType item );  //：将元素item插入最大堆H。
bool IsHeapEmpty( MinHeap H );   //：判断最大堆H是否为空。
HeapElementType DeleteMax( MinHeap H ); //：返回H中最大元素(高优先级)。

#endif