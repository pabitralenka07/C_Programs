/* Program 72: Pattern Reverse Alphabet Triangle
   Compile: gcc program_072.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Reverse alphabet triangle
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }
    return 0;
}
