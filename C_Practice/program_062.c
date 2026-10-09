/* Program 62: Pattern Continuous Numbers
   Compile: gcc program_062.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Continuous sequential numbers arranged in triangle
// 1
// 2 3
// 4 5 6
int main() {
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", num++);
        printf("\n");
    }
    return 0;
}
