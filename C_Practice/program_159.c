/* Program 159: Pointer Comparison
   Compile: gcc program_159.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Compare two pointers – same or different address
int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b, *r = &a;
    printf("p==q: %s\n", p == q ? "Same" : "Different");
    printf("p==r: %s\n", p == r ? "Same" : "Different");
    return 0;
}
