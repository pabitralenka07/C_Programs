/* Program 23: Power Using Loop
   Compile: gcc program_023.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Calculate base^exp using a loop
int main() {
    int base, exp;
    long long result = 1;
    scanf("%d %d", &base, &exp);
    for (int i = 0; i < exp; i++)
        result *= base;
    printf("%lld\n", result);
    return 0;
}
