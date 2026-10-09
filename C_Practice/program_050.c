/* Program 50: LCM of Two Numbers
   Compile: gcc program_050.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find LCM of two numbers using GCD
int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while (y) { int t = y; y = x % y; x = t; }
    printf("%d\n", (a * b) / x);
    return 0;
}
