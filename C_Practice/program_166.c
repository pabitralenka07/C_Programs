/* Program 166: Memory Leak Demo Wrong Way
   Compile: gcc program_166.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// WRONG: memory leak - pointer reassigned without freeing
// This is an educational example of what NOT to do
int main() {
    int *p = malloc(10 * sizeof(int));
    // BAD: p = NULL here loses the only reference to the memory
    // Correct approach shown in next program (167)
    printf("Memory allocated but will be leaked if we do p=NULL without free\n");
    free(p); // CORRECT: always free before reassigning or leaving scope
    p = NULL;
    return 0;
}
