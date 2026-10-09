/* Program 164: Dynamic Array Input
   Compile: gcc program_164.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Read n elements into dynamically allocated array
int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
