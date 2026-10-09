/* Program 77: Pattern Sandglass Stars
   Compile: gcc program_077.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sandglass (hourglass) star pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
