/* Program 73: Pattern Continuous Alphabets
   Compile: gcc program_073.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Continuous alphabets in triangle
int main() {
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%c ", ch++);
        printf("\n");
    }
    return 0;
}
