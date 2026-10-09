/* Program 49: GCD of Two Numbers
   Compile: gcc program_049.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find GCD of two numbers using Euclidean algorithm
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    while (b) { int t = b; b = a % b; a = t; }
    printf("%d\n", a);
    return 0;
}
