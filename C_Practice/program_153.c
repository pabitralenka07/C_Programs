/* Program 153: Pointer Array Traversal
   Compile: gcc program_153.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Traverse array using pointer increment
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
