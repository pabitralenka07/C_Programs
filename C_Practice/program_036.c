/* Program 36: Sum of Digits
   Compile: gcc program_036.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Calculate sum of digits of a number
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
