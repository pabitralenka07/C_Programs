/* Program 125: Matrix Addition
   Compile: gcc program_125.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Add two 2x2 matrices
int main() {
    int a[2][2], b[2][2], c[2][2];
    printf("Enter matrix A:\n");
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) scanf("%d",&a[i][j]);
    printf("Enter matrix B:\n");
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) scanf("%d",&b[i][j]);
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) c[i][j]=a[i][j]+b[i][j];
    for (int i=0;i<2;i++) { for(int j=0;j<2;j++) printf("%d ",c[i][j]); printf("\n"); }
    return 0;
}
