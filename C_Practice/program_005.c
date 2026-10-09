/* Program 5: Swap Using Temp
   Compile: gcc program_005.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Swap two numbers using temp variable
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d\n", a, b);
    return 0;
}
