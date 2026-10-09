/* Program 121: Remove Duplicates from Array
   Compile: gcc program_121.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Remove duplicate elements (sorted array approach)
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    // Simple O(n^2) approach
    int res[n], rn = 0;
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < rn; j++)
            if (res[j] == arr[i]) { dup = 1; break; }
        if (!dup) res[rn++] = arr[i];
    }
    for (int i = 0; i < rn; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}
