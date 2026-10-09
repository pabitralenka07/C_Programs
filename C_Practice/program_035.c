/* Program 35: Count Digits in Number
   Compile: gcc program_035.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Count the number of digits in a number
int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n == 0) { printf("1\n"); return 0; }
    while (n != 0) { count++; n /= 10; }
    printf("%d\n", count);
    return 0;
}
