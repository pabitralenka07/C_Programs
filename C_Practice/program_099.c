/* Program 99: Recursion Power
   Compile: gcc program_099.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// base^exp using recursion
int power(int b, int e) {
    if (e == 0) return 1;
    return b * power(b, e - 1);
}

int main() {
    printf("%d\n", power(2, 6));
    return 0;
}
