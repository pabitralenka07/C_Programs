// Program 06

// Write a program to find minimum Cost spanning tree of a given connected, undirected graph using Kruskal’s algorithm.Use Union-find algorithm to detect cycle in a graph.

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int i;
typedef struct {
    int u, v, weight;
} Edge;

typedef struct {
    int V, E;
    Edge edges[MAX];
} Graph;

int parent[MAX], rank[MAX];

void initSet(int V) {
    for (i = 0; i < V; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);  
    }
    return parent[x];
}

void unionSet(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY) {
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

int compareEdges(const void *a, const void *b) {
    return ((Edge *)a)->weight - ((Edge *)b)->weight;
}

void kruskal(Graph *g) {
    Edge result[MAX];
    int e = 0;
    int i = 0; 

    qsort(g->edges, g->E, sizeof(Edge), compareEdges);
    initSet(g->V);

    while (e < g->V - 1 && i < g->E) {
        Edge edge = g->edges[i++];
        int u = edge.u;
        int v = edge.v;

        int setU = find(u);
        int setV = find(v);

        if (setU != setV) {
            result[e++] = edge;
            unionSet(setU, setV);
        }
    }

    printf("Minimum Cost Spanning Tree:\n");
    for (i = 0; i < e; i++) {
        printf("%d - %d: %d\n", result[i].u, result[i].v, result[i].weight);
    }
}

int main() {
    Graph g;

    printf("Enter the number of vertices: ");
    scanf("%d", &g.V);
    printf("Enter the number of edges: ");
    scanf("%d", &g.E);

    printf("Enter the edges (u v weight):\n");
    for (i = 0; i < g.E; i++) {
        printf("Edge %d: ", i + 1);
        scanf("%d %d %d", &g.edges[i].u, &g.edges[i].v, &g.edges[i].weight);
    }

    kruskal(&g);
    return 0;
}
