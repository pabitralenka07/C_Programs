/* Program 44: Factorial Using Loop
   Compile: gcc program_044.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Factorial of N using loop
int main() {
    int n;
    long long fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) fact *= i;
    printf("%lld\n", fact);
    return 0;
}
