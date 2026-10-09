/* Program 41: Print 1 to N
   Compile: gcc program_041.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print numbers from 1 to N
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}
