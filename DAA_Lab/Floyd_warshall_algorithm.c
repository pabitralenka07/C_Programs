// Program  08

// Write a program t o solve All-Pairs Shortest Paths problem using Floyd's algorithm.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 99999

void printMatrix(int n, int matrix[n][n]) {
    printf("\nFinal shortest path matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", matrix[i][j]);
        }
        printf("\n");
    }
}

void floydWarshall(int n, int graph[n][n]) {
    int dist[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dist[i][j] = graph[i][j];

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][k] != INF && dist[k][j] != INF &&
                    dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    printMatrix(n, dist);
}

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];
    char input[10];

    printf("Enter adjacency matrix (use INF for no edge):\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%s", input);
            if (strcmp(input, "INF") == 0)
                graph[i][j] = INF;
            else
                graph[i][j] = atoi(input);
        }
    }

    floydWarshall(n, graph);
    return 0;
}
