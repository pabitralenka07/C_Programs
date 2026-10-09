// Matrix multiplication.

#include <stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}},b[2][2]={{1,1},{1,1}},c[2][2],i,j,k;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++){
            c[i][j]=0;
            for(k=0;k<2;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    printf("%d",c[0][0]);
}
