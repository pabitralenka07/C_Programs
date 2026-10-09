/* Program 70: Pattern X Shape Stars
   Compile: gcc program_070.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// X-shape star pattern using 2n-1 grid
int main() {
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == size - 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
