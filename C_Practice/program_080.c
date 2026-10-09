/* Program 80: Pattern Magic Square 3x3
   Compile: gcc program_080.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Magic square 3x3 (rows, cols, diagonals all sum to 15)
int main() {
    int magic[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", magic[i][j]);
        printf("\n");
    }
    return 0;
}
