/* Program 53: Pattern Pyramid Stars
   Compile: gcc program_053.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Pyramid (centred triangle) star pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
