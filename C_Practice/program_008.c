/* Program 8: Largest of Two Numbers
   Compile: gcc program_008.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find the largest of two numbers
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("a is larger\n");
    else
        printf("b is larger\n");
    return 0;
}
