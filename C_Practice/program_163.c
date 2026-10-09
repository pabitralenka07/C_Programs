/* Program 163: Dynamic Memory realloc
   Compile: gcc program_163.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// realloc: resize previously allocated memory
int main() {
    int *p = malloc(2 * sizeof(int));
    p[0] = 1; p[1] = 2;
    p = realloc(p, 4 * sizeof(int)); // expand
    p[2] = 3; p[3] = 4;
    for (int i = 0; i < 4; i++) printf("%d ", p[i]);
    printf("\n");
    free(p);
    return 0;
}
