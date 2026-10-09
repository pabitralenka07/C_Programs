// WAP in c to implement a sparse matrix (using CSR) .

#include<stdio.h>
#define MAX 100

int main()
{
    int m,n;
    int matrix [10][10];
    int values [MAX],col[MAX],row[11];
    int i,j,count = 0;
    printf("Entre no. of rows : ");
    scanf("%d",&m);
    printf("Enter no. of column : ");
    scanf("%d",&n);
    printf("Enter the matrix elements : \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    row[0]=0;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                values [count] = matrix[i][j];
                col[count] = j;
                count ++;
            }
            
        }
        row [i + 1] = count;
    }
    printf("\n CSR Representation : \n");
    printf("Values : ");
    for ( i = 0; i < count; i++)
    {
        printf("%d",values[i]);
    }
    printf("\n");
    printf("Column Indices : ");
    for ( i = 0; i < count; i++)
    {
        printf("%d",col[i]);
    }
    printf("\n");
    printf("Row Pointers : ");
    for ( i = 0; i < m; i++)
    {
        printf("%d",row[i]);
    }
    printf("\n");
    return 0;
}
