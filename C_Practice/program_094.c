/* Program 94: Function Find GCD
   Compile: gcc program_094.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to find GCD of two numbers
int gcd(int a, int b) {
    while (b) { int t = b; b = a % b; a = t; }
    return a;
}

int main() {
    printf("%d\n", gcd(12, 18));
    return 0;
}
