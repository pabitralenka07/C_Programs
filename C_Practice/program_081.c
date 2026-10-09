/* Program 81: Function Add Two Numbers
   Compile: gcc program_081.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to add two numbers
int add(int a, int b) { return a + b; }

int main() {
    printf("%d\n", add(5, 10));
    return 0;
}
