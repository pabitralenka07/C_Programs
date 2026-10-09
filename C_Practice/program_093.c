/* Program 93: Function Calculate Power
   Compile: gcc program_093.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to compute base^exp iteratively
long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) res *= base;
    return res;
}

int main() {
    printf("%lld\n", power(2, 5));
    return 0;
}
