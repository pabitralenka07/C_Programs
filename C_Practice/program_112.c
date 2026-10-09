/* Program 112: Array Delete Element
   Compile: gcc program_112.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Delete element at given position
int main() {
    int arr[100], n, pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
