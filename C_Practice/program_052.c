/* Program 52: Pattern Inverted Triangle Stars
   Compile: gcc program_052.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Inverted right triangle star pattern
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
