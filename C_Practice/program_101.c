/* Program 101: Recursion GCD
   Compile: gcc program_101.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// GCD using recursion (Euclidean method)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    printf("%d\n", gcd(48, 18));
    return 0;
}
