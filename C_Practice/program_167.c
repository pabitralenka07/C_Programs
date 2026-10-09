/* Program 167: Memory Free Proper Way
   Compile: gcc program_167.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Proper memory management: free then set to NULL
int main() {
    int *p = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) p[i] = i * 10;
    for (int i = 0; i < 5; i++) printf("%d ", p[i]);
    printf("\n");
    free(p);      // release memory
    p = NULL;     // avoid dangling pointer
    printf("Memory freed safely\n");
    return 0;
}
