/* Program 11: Positive Negative Zero
   Compile: gcc program_011.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if number is positive, negative, or zero
int main() {
    int n;
    scanf("%d", &n);
    if (n > 0)      printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else            printf("Zero\n");
    return 0;
}
