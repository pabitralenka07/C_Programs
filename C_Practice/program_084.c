/* Program 84: Function Find Maximum of Three
   Compile: gcc program_084.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to find max of three numbers
int max3(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= c) return b;
    return c;
}

int main() {
    printf("%d\n", max3(10, 5, 8));
    return 0;
}
