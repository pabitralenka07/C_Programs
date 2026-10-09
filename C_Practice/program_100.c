/* Program 100: Recursion Reverse Number
   Compile: gcc program_100.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Reverse a number using recursion via accumulator
int rev(int n, int r) {
    if (n == 0) return r;
    return rev(n / 10, r * 10 + n % 10);
}

int main() {
    printf("%d\n", rev(12345, 0));
    return 0;
}
