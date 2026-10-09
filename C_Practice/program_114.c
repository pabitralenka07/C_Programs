/* Program 114: Binary Search
   Compile: gcc program_114.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Binary search on sorted array: O(log n)
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == key) { printf("Found at index %d\n", mid); return 0; }
        else if (key < arr[mid]) r = mid - 1;
        else l = mid + 1;
    }
    printf("Not Found\n");
    return 0;
}
