/* Program 28: Minimum in Array
   Compile: gcc program_028.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find minimum element in array
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    printf("Min = %d\n", min);
    return 0;
}
