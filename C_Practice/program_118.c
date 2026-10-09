/* Program 118: Find Second Largest in Array
   Compile: gcc program_118.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find second largest element in array
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0], second = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) { second = max; max = arr[i]; }
        else if (arr[i] > second && arr[i] != max) second = arr[i];
    }
    printf("%d\n", second);
    return 0;
}
