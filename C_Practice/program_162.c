/* Program 162: Dynamic Memory calloc
   Compile: gcc program_162.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// calloc allocates AND zero-initializes memory
int main() {
    int n;
    scanf("%d", &n);
    int *p = (int*) calloc(n, sizeof(int));
    if (!p) { printf("Allocation failed\n"); return 1; }
    for (int i = 0; i < n; i++) printf("%d ", p[i]); // all 0
    printf("\n");
    free(p);
    return 0;
}
