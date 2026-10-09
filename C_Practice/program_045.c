/* Program 45: Fibonacci Series
   Compile: gcc program_045.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print N terms of Fibonacci series
int main() {
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
