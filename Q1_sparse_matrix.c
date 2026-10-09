// Q1. Write a C program to implement a sparse matrix

#include <stdio.h>

int main() {
    int m, n, i, j, k = 1;
    int a[10][10], sparse[20][3];

    printf("Enter rows and cols: ");
    scanf("%d%d", &m, &n);

    printf("Enter matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j]!=0){
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=a[i][j];
                k++;
            }

    sparse[0][0]=m;
    sparse[0][1]=n;
    sparse[0][2]=k-1;

    printf("Sparse Matrix:\n");
    for(i=0;i<k;i++)
        printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);

    return 0;
}
