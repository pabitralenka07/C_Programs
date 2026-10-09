// WAP for representing sparse matrix using array(using 3 tuple row,column,value) .

#include <stdio.h>
#define MAX 100 
struct SparseMatrix 
{
    int row,col,value;
};

int main() 
{
    int m, n,i,j;
    int count = 0;
    int matrix[10][10];
    struct SparseMatrix sparse[MAX];
    printf("Enter the number of rows : ");
    scanf("%d", &m);
    printf("Enter the number of columns : ");
    scanf("%d", &n);
    printf("Enter the matrix elements :\n");
    
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
            
            if (matrix[i][j] != 0) 
            {
                sparse[count + 1].row = i;
                sparse[count + 1].col = j;
                sparse[count + 1].value = matrix[i][j];
                count++;
            }
        }
    }
    sparse[0].row = m;
    sparse[0].col = n;
    sparse[0].value = count;
    printf("\nSparse Matrix Representation (Row, Column, Value) :\n");
    
    for (i = 0; i <= count; i++) 
    {
        printf("%d\t%d\t%d\n", sparse[i].row, sparse[i].col, sparse[i].value);
    }
    
return 0;
}
