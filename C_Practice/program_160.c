/* Program 160: Null Pointer Check
   Compile: gcc program_160.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check and handle null pointer safely
int main() {
    int *p = NULL;
    if (p == NULL)
        printf("Pointer is NULL – safe to check before use\n");
    else
        printf("Value: %d\n", *p);
    return 0;
}
