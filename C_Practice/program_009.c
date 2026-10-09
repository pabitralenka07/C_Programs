/* Program 9: Largest of Three Numbers
   Compile: gcc program_009.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find the largest of three numbers
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("a is largest\n");
    else if (b >= c)
        printf("b is largest\n");
    else
        printf("c is largest\n");
    return 0;
}
