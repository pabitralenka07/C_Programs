/* Program 42: Print N to 1
   Compile: gcc program_042.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print numbers from N down to 1
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
        printf("%d ", i);
    printf("\n");
    return 0;
}
