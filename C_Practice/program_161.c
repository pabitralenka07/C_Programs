/* Program 161: Dynamic Memory malloc
   Compile: gcc program_161.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Dynamic array using malloc (uninitialized memory)
int main() {
    int n;
    scanf("%d", &n);
    int *p = (int*) malloc(n * sizeof(int));
    if (!p) { printf("Allocation failed\n"); return 1; }
    for (int i = 0; i < n; i++) p[i] = i + 1;
    for (int i = 0; i < n; i++) printf("%d ", p[i]);
    printf("\n");
    free(p);
    return 0;
}
