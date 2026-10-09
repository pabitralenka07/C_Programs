/* Program 88: Function Swap Using Pointers
   Compile: gcc program_088.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Swap two variables via pointer parameters
void swap(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
