/* Program 95: Function Print Array
   Compile: gcc program_095.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to print array elements
void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3};
    printArr(arr, 3);
    return 0;
}
