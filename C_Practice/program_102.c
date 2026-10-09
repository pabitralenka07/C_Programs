/* Program 102: Recursion Binary Search
   Compile: gcc program_102.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Binary search using recursion
int bs(int arr[], int l, int r, int key) {
    if (l > r) return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == key) return mid;
    if (key < arr[mid]) return bs(arr, l, mid - 1, key);
    return bs(arr, mid + 1, r, key);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Index: %d\n", bs(arr, 0, 4, 3));
    return 0;
}
