/* Program 54: Pattern Inverted Pyramid Stars
   Compile: gcc program_054.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Inverted pyramid star pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
