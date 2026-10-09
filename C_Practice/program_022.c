/* Program 22: Square and Cube
   Compile: gcc program_022.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print square and cube of a number
int main() {
    int n;
    scanf("%d", &n);
    printf("Square = %d\n", n * n);
    printf("Cube   = %d\n", n * n * n);
    return 0;
}
