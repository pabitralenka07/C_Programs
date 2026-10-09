/* Program 74: Pattern Alphabet Pyramid
   Compile: gcc program_074.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Centred alphabet pyramid
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf(" ");
        for (int j = 0; j <= i; j++) printf("%c ", 'A' + j);
        printf("\n");
    }
    return 0;
}
