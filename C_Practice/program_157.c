/* Program 157: Pointer and String Traversal
   Compile: gcc program_157.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Traverse string character by character using pointer
int main() {
    char str[] = "Hello";
    char *p = str;
    while (*p) {
        printf("%c ", *p);
        p++;
    }
    printf("\n");
    return 0;
}
