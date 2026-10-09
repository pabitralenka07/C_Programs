/* Program 154: Swap Using Pointer Function
   Compile: gcc program_154.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Swap two numbers using pointer parameters
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}
int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
