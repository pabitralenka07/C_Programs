/* Program 76: Pattern Zigzag Stars
   Compile: gcc program_076.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Zigzag star pattern in 3 rows
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && j % 4 == 0) ||
                (i == 1 && j % 4 != 0) ||
                (i == 2 && (j - 2) % 4 == 0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
