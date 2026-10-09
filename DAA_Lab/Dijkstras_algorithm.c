// Program 05

// Write a program to find the shortest paths to other vertices from a given vertex in a weighted connected graph using Dijkstra’s algorithm.


#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_VERTICES 10

int i, j, count, v;

int minDistance(int dist[], bool visited[], int vertices) {
    int min_dist = INT_MAX, min_vertex = -1;

    for (v = 0; v < vertices; v++) {
        if (!visited[v] && dist[v] <= min_dist) {
            min_dist = dist[v];
            min_vertex = v;
        }
    }
    return min_vertex;
}

void printSolution(int dist[], int vertices, int src) {
    printf("\nVertex\tDistance from Source (%d)\n", src);
    for (i = 0; i < vertices; i++) {
        if (dist[i] == INT_MAX)
            printf("%d\tNo path\n", i);
        else
            printf("%d\t%d\n", i, dist[i]);
    }
}

void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int src) {
    int dist[MAX_VERTICES];
    bool visited[MAX_VERTICES];

    for (i = 0; i < vertices; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0;

    for (count = 0; count < vertices - 1; count++) {
        int u = minDistance(dist, visited, vertices);
        visited[u] = true;

        for (v = 0; v < vertices; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist, vertices, src);
}

int main() {
    int vertices, src;
    int graph[MAX_VERTICES][MAX_VERTICES];

    printf("Enter number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX_VERTICES) {
        printf("Invalid number of vertices.\n");
        return 1;
    }

    printf("Enter adjacency matrix (0 for no edge):\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source vertex (0 to %d): ", vertices - 1);
    scanf("%d", &src);

    if (src < 0 || src >= vertices) {
        printf("Invalid source vertex.\n");
        return 1;
    }

    dijkstra(graph, vertices, src);

    return 0;
}
