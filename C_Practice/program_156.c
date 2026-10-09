/* Program 156: Pointer Modify Value via Function
   Compile: gcc program_156.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Modify variable inside function via pointer
void update(int *x) { *x += 5; }

int main() {
    int a = 10;
    update(&a);
    printf("%d\n", a); // 15
    return 0;
}
