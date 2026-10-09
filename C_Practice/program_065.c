/* Program 65: Pattern Palindromic Numbers
   Compile: gcc program_065.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Palindromic number pattern per row
// Row 3: 1 2 3 2 1
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        for (int j = i - 1; j >= 1; j--) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
