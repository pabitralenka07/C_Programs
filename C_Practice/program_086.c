/* Program 86: Call by Value Demo
   Compile: gcc program_086.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Demonstrates call by value – original unchanged
void change(int x) { x = 100; }

int main() {
    int a = 10;
    change(a);
    printf("%d\n", a);  // still 10
    return 0;
}
