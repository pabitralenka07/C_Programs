/* Program 87: Call by Reference Demo
   Compile: gcc program_087.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Demonstrates call by reference – original is changed
void change(int *x) { *x = 100; }

int main() {
    int a = 10;
    change(&a);
    printf("%d\n", a);  // now 100
    return 0;
}
