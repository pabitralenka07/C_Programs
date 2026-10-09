/* Program 126: Matrix Multiplication
   Compile: gcc program_126.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Multiply two 2x2 matrices
int main() {
    int a[2][2], b[2][2], c[2][2] = {0};
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) scanf("%d",&a[i][j]);
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) scanf("%d",&b[i][j]);
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            for (int k=0;k<2;k++)
                c[i][j] += a[i][k] * b[k][j];
    for (int i=0;i<2;i++) { for(int j=0;j<2;j++) printf("%d ",c[i][j]); printf("\n"); }
    return 0;
}
