/* Program 158: Pointer to Array
   Compile: gcc program_158.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Pointer to an entire array row
int main() {
    int arr[3] = {10, 20, 30};
    int (*p)[3] = &arr;
    printf("%d %d %d\n", (*p)[0], (*p)[1], (*p)[2]);
    return 0;
}
