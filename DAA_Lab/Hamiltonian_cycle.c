// Program 12

// Design and implement a program to find all Hamiltonian Cycles in a connected undirected Graph G of n vertices using backtracking principle.

#include <stdio.h>
#include <stdbool.h>

#define MAX 20

int graph[MAX][MAX];
int path[MAX];
int n;
bool found = false;

void printCycle() {
    printf("Hamiltonian Cycle: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", path[i] + 1);
    }
    printf("%d\n", path[0] + 1);
    found = true;
}

bool isSafe(int v, int pos) {

    if (graph[path[pos - 1]][v] == 0)
        return false;

    for (int i = 0; i < pos; i++) {
        if (path[i] == v)
            return false;
    }

    return true;
}

void hamiltonianUtil(int pos) {

    if (pos == n) {
        if (graph[path[pos - 1]][path[0]] == 1)
            printCycle();
        return;
    }

    for (int v = 1; v < n; v++) {
        if (isSafe(v, pos)) {
            path[pos] = v;

            hamiltonianUtil(pos + 1);

            path[pos] = -1;
        }
    }
}

int main() {
    int e, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            graph[i][j] = 0;

    printf("Enter edges (u v):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        u--; v--;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    for (int i = 0; i < n; i++)
        path[i] = -1;

    path[0] = 0;

    printf("\nHamiltonian Cycles:\n");

    hamiltonianUtil(1);

    if (!found)
        printf("No Hamiltonian Cycle exists.\n");

    return 0;
}
