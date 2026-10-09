// Program 07

// Write a program to find Minimum Cost Spanning Tree of a given connected undirected graph using Prim's algorithm.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 9999999
#define MAX 100

int main() {
    int V, E, i, j;
    int G[MAX][MAX] = {0};

    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    printf("Enter the number of edges: ");
    scanf("%d", &E);

    printf("Enter the edges (u v weight):\n");
    for (i = 0; i < E; i++) {
        int u, v, w;
        printf("Edge %d: ", i + 1);
        scanf("%d %d %d", &u, &v, &w);
        G[u][v] = w;
        G[v][u] = w;
    }

    int selected[MAX];
    memset(selected, 0, sizeof(selected));
    selected[0] = 1;

    int no_edge = 0;

    printf("\nMinimum Cost Spanning Tree:\n");

    while (no_edge < V - 1) {
        int min = INF;
        int x = -1, y = -1;

        for (i = 0; i < V; i++) {
            if (selected[i]) {
                for (j = 0; j < V; j++) {
                    if (!selected[j] && G[i][j]) {
                        if (G[i][j] < min) {
                            min = G[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        if (x != -1 && y != -1) {
            printf("%d - %d: %d\n", x, y, G[x][y]);
            selected[y] = 1;
            no_edge++;
        }
    }

    return 0;
}
