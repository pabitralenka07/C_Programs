/* Program 48: Print All Primes 1 to N
   Compile: gcc program_048.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print all prime numbers from 1 to N
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) { flag = 0; break; }
        if (flag) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
