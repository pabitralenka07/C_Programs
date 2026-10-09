/* Program 64: Pattern Pyramid Numbers
   Compile: gcc program_064.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Pyramid with row number repeated
// for n=4, row 2 prints: 2 2
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("%d ", i);
        printf("\n");
    }
    return 0;
}
