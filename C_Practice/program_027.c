/* Program 27: Maximum in Array
   Compile: gcc program_027.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find maximum element in array
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    printf("Max = %d\n", max);
    return 0;
}
