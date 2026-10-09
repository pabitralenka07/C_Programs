/* Program 110: Recursion Check Prime
   Compile: gcc program_110.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check prime using recursion
int isPrime(int n, int i) {
    if (n <= 1) return 0;
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return isPrime(n, i + 1);
}

int main() {
    printf(isPrime(13, 2) ? "Prime\n" : "Not Prime\n");
    return 0;
}
