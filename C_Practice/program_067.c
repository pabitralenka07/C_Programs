/* Program 67: Pattern Floyd Triangle
   Compile: gcc program_067.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Floyd's triangle: natural numbers row by row
int main() {
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d\t", num++);
        printf("\n");
    }
    return 0;
}
