/* Program 113: Linear Search
   Compile: gcc program_113.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Linear search: O(n)
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { printf("Found at index %d\n", i); return 0; }
    }
    printf("Not Found\n");
    return 0;
}
