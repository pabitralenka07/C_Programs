/* Program 59: Pattern Right Aligned Triangle
   Compile: gcc program_059.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Right-aligned triangle pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
