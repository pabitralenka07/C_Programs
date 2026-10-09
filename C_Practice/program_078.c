/* Program 78: Pattern Solid Diamond
   Compile: gcc program_078.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Full solid diamond pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
