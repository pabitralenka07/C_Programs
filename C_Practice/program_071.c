/* Program 71: Pattern Alphabet Triangle
   Compile: gcc program_071.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Alphabet triangle A B C ...
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
            printf("%c ", ch);
        printf("\n");
    }
    return 0;
}
