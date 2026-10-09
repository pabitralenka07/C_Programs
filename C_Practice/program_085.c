/* Program 85: Function Sum of Array
   Compile: gcc program_085.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function that takes array and returns sum
int sumArr(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    printf("%d\n", sumArr(arr, 4));
    return 0;
}
