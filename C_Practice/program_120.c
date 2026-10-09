/* Program 120: Rotate Array Right
   Compile: gcc program_120.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Right rotate array by 1 position
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
