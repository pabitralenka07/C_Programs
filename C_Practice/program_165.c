/* Program 165: Dynamic Array Sum
   Compile: gcc program_165.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Sum elements of a dynamically allocated array
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) { scanf("%d", &arr[i]); sum += arr[i]; }
    printf("Sum = %d\n", sum);
    free(arr);
    return 0;
}
