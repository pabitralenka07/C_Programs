/* Program 75: Pattern Character Diamond
   Compile: gcc program_075.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Character diamond using A B C ...
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j > 0; j--) printf(" ");
        for (int j = 0; j <= i; j++) printf("%c ", 'A' + j);
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - i - 1; j > 0; j--) printf(" ");
        for (int j = 0; j <= i; j++) printf("%c ", 'A' + j);
        printf("\n");
    }
    return 0;
}
