/* Program 6: Swap Without Temp
   Compile: gcc program_006.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Swap two numbers without temp variable
int main() {
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d b=%d\n", a, b);
    return 0;
}
