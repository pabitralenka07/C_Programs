/* Program 57: Pattern Hollow Triangle
   Compile: gcc program_057.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Hollow right triangle pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
