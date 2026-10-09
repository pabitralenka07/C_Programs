/* Program 60: Pattern Inverted Right Aligned Triangle
   Compile: gcc program_060.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Inverted right-aligned triangle
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
