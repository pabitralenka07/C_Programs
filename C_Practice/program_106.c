/* Program 106: Recursion Count Digits
   Compile: gcc program_106.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Count digits of a number using recursion
int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    printf("%d\n", countDigits(12345));
    return 0;
}
