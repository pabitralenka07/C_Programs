/* Program 34: Print Elements in Reverse
   Compile: gcc program_034.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print array elements in reverse order (without modifying)
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = n - 1; i >= 0; i--) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
