/* Program 116: Selection Sort
   Compile: gcc program_116.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Selection sort: always O(n^2)
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        int t = arr[i]; arr[i] = arr[minIdx]; arr[minIdx] = t;
    }
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
