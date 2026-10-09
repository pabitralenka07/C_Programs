/* Program 96: Recursion Factorial
   Compile: gcc program_096.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Factorial using recursion
// Base: fact(0) = 1
// Step: fact(n) = n * fact(n-1)
long long fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    printf("%lld\n", fact(6));
    return 0;
}
