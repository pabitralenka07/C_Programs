/* Program 56: Pattern Hollow Square
   Compile: gcc program_056.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Hollow square border pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
