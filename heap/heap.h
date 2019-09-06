#ifndef _HEAP_H_
#define _HEAP_H_

#include <stdbool.h>
typedef int ElementType;
typedef struct HNode *Heap; /* 堆的类型定义 */
struct HNode
{
    ElementType *Data; /* 存储元素的数组 */
    int Size;          /* 堆中当前元素个数 */
    int Capacity;      /* 堆的最大容量 */
};
typedef Heap MaxHeap; /* 最大堆 */
typedef Heap MinHeap; /* 最小堆 */

#define MAXDATA 1000 /* 该值应根据具体情况定义为大于堆中所有可能元素的值 */

MaxHeap CreateHeap( int MaxSize );  //：创建一个空的最大堆。
bool IsFull( MaxHeap H );    //：判断最大堆H是否已满。
bool Insert( MaxHeap H, ElementType item );  //：将元素item插入最大堆H。
bool IsEmpty( MaxHeap H );   //：判断最大堆H是否为空。
ElementType DeleteMax( MaxHeap H ); //：返回H中最大元素(高优先级)。

#endif