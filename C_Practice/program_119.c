/* Program 119: Rotate Array Left
   Compile: gcc program_119.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Left rotate array by 1 position
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = first;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
