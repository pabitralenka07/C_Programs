// Program  09

// Write a program to solve Travelling Sales Person problem using Dynamic programming.

#include <stdio.h>
#include <limits.h>

#define MAX 15

int n;
int dist[MAX][MAX];
int dp[1 << MAX][MAX];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int tsp(int mask, int pos) {
    if (mask == (1 << n) - 1)
        return dist[pos][0];

    if (dp[mask][pos] != -1)
        return dp[mask][pos];

    int ans = INT_MAX;

    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = dist[pos][city] +
                tsp(mask | (1 << city), city);
            ans = min(ans, newAns);
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    printf("Enter number of cities (<=15): ");
    scanf("%d", &n);

    if (n > 15) {
        printf("Too many cities! Use <=15\n");
        return 0;
    }

    printf("Enter distance matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &dist[i][j]);

    for (int i = 0; i < (1 << n); i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;

    printf("Minimum Distance = %d\n", tsp(1, 0));
    return 0;
}
