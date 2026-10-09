/* Program 152: Pointer Arithmetic
   Compile: gcc program_152.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Pointer arithmetic: moving through array via pointer offsets
int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("%d\n", *p);       // 10
    printf("%d\n", *(p + 1)); // 20
    printf("%d\n", *(p + 2)); // 30
    return 0;
}
