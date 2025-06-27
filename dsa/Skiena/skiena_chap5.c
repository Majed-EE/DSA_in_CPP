#include<stdio.h>
#include <stdbool.h> 
#define MAXV 1000 /* maximum number of vertices */
typedef struct {
int y; /* adjacency info */
int weight; /* edge weight, if any */
struct edgenode *next; /* next edge in list */
} edgenode;


typedef struct {
edgenode *edges[MAXV+1]; /* adjacency info */
int degree[MAXV+1]; /* outdegree of each vertex */
int nvertices; /* number of vertices in graph */
int nedges; /* number of edges in graph */
int directed; /* is the graph directed? */
} graph;


void main(){
    // chapter 6
    // 6.1 minimum spanning trees
    // 6.1.1 prim's algorithm
    // 6.1.2 Kruskal's algorithm

    // 6.3.2 Dijstra's Algorithm

    // 6.5 network flows and bipartite mathcing

}