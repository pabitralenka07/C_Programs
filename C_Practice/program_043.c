/* Program 43: Sum of First N Natural Numbers
   Compile: gcc program_043.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sum of first N natural numbers using loop
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += i;
    printf("%d\n", sum);
    return 0;
}
