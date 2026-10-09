// •Write C program for matrix addition

#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix A:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &b[i][j]);

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Resultant Matrix (A+B):\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
