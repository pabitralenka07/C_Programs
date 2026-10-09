/* Program 47: Check Prime Number
   Compile: gcc program_047.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if N is a prime number
int main() {
    int n, flag = 1;
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) { flag = 0; break; }
    printf(flag ? "Prime\n" : "Not Prime\n");
    return 0;
}
