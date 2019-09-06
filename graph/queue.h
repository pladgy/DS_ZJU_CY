#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdbool.h>

#define ERROR -1

typedef int ElementType;


typedef int Position;
struct QNode {
    ElementType *Data;     /* 存储元素的数组 */
    Position Front, Rear;  /* 队列的头、尾指针 */
    int MaxSize;           /* 队列最大容量 */
};
typedef struct QNode *Queue;

////
Queue CreateQueue( int MaxSize );
bool IsFull( Queue Q );
bool AddQ( Queue Q, ElementType X );
bool IsEmpty( Queue Q );
ElementType DeleteQ( Queue Q );

#endif
