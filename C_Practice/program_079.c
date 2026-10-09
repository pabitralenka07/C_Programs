/* Program 79: Pattern Spiral Numbers 4x4
   Compile: gcc program_079.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Spiral number matrix (4x4 fixed demonstration)
int main() {
    int n = 4;
    int mat[4][4] = {
        {1,  2,  3,  4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10,  9,  8, 7}
    };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d", mat[i][j]);
        printf("\n");
    }
    return 0;
}
