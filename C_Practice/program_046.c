/* Program 46: Multiplication Table
   Compile: gcc program_046.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print multiplication table of N (1–10)
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
