/* Program 37: Reverse a Number
   Compile: gcc program_037.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Reverse digits of a number
int main() {
    int n, rev = 0;
    scanf("%d", &n);
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", rev);
    return 0;
}
