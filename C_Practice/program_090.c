/* Program 90: Function Factorial
   Compile: gcc program_090.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to compute factorial iteratively
long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    printf("%lld\n", fact(5));
    return 0;
}
