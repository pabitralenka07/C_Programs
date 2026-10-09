/* Program 155: Pointer to Pointer Double Pointer
   Compile: gcc program_155.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Double pointer: pointer storing address of another pointer
int main() {
    int a = 42;
    int *p = &a;
    int **pp = &p;
    printf("Value via **pp: %d\n", **pp);
    return 0;
}
