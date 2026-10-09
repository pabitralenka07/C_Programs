/* Program 98: Recursion Sum of N
   Compile: gcc program_098.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sum of 1..N using recursion
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    printf("%d\n", sum(5));
    return 0;
}
