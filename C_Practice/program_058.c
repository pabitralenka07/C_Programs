/* Program 58: Pattern Half Diamond Stars
   Compile: gcc program_058.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Half diamond: increase then decrease
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
