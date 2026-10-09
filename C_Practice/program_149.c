/* Program 149: Transpose of Matrix
   Compile: gcc program_149.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Transpose a 3x3 matrix
int main(){
    int a[3][3];
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) scanf("%d",&a[i][j]);
    printf("Transpose:\n");
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%d ",a[j][i]); printf("\n"); }
    return 0;
}
