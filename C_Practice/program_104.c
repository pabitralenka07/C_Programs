/* Program 104: Recursion Print Numbers
   Compile: gcc program_104.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print 1 to N using recursion
void print(int n, int max) {
    if (n > max) return;
    printf("%d ", n);
    print(n + 1, max);
}

int main() {
    print(1, 5);
    printf("\n");
    return 0;
}
