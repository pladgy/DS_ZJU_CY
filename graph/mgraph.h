#ifndef _MGRAPH_H_
#define _MGRAPH_H_

////
#include <stdbool.h>


/* 图的邻接矩阵表示法 */
 
#define MaxVertexNum 100    /* 最大顶点数设为100 */
#define INFINITY 65535        /* ∞设为双字节无符号整数的最大值65535*/
typedef int Vertex;         /* 用顶点下标表示顶点,为整型 */
typedef int WeightType;        /* 边的权值设为整型 */
typedef char DataType;        /* 顶点存储的数据类型设为字符型 */
 
/* 边的定义 */
typedef struct ENode *PtrToENode;
struct ENode{
    Vertex V1, V2;      /* 有向边<V1, V2> */
    WeightType Weight;  /* 权重 */
};
typedef PtrToENode Edge;
        
/* 图结点的定义 */
typedef struct GNode *PtrToGNode;
struct GNode{
    int Nv;  /* 顶点数 */
    int Ne;  /* 边数   */
    WeightType G[MaxVertexNum][MaxVertexNum]; /* 邻接矩阵 */
    DataType Data[MaxVertexNum];      /* 存顶点的数据 */
    /* 注意：很多情况下，顶点无数据，此时Data[]可以不用出现 */
};
typedef PtrToGNode MGraph; /* 以邻接矩阵存储的图类型 */


////
void Visit( Vertex V );
MGraph CreateGraph( int VertexNum );
void InsertEdge( MGraph Graph, Edge E );
MGraph BuildGraph();
bool IsEdge( MGraph Graph, Vertex V, Vertex W );
//void BFS ( MGraph Graph, Vertex S, void (*Visit)(Vertex) );

Vertex FindMinDist( MGraph Graph, int dist[], int collected[] );
bool Dijkstra( MGraph Graph, int dist[], int path[], Vertex S );
bool Floyd( MGraph Graph, WeightType D[][MaxVertexNum], Vertex path[][MaxVertexNum] );
bool heapDijkstra( MGraph Graph, int dist[], int path[], Vertex S );

#endif