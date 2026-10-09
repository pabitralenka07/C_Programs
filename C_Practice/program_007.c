/* Program 7: Check Even or Odd
   Compile: gcc program_007.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if a number is even or odd
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
