/* Program 83: Function Find Maximum of Two
   Compile: gcc program_083.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to find max of two numbers
int maxTwo(int a, int b) { return (a > b) ? a : b; }

int main() {
    printf("%d\n", maxTwo(10, 20));
    return 0;
}
