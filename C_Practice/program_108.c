/* Program 108: Recursion Print Array
   Compile: gcc program_108.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print array elements using recursion
void printArr(int arr[], int i, int n) {
    if (i == n) return;
    printf("%d ", arr[i]);
    printArr(arr, i + 1, n);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    printArr(arr, 0, 4);
    printf("\n");
    return 0;
}
