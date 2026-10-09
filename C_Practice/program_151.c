/* Program 151: Pointer Basics
   Compile: gcc program_151.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Basic pointer: store address, dereference to get value
int main() {
    int a = 10;
    int *p = &a;
    printf("Value  : %d\n", *p);
    printf("Address: %p\n", (void*)p);
    return 0;
}
