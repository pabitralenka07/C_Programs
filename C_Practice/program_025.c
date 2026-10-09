/* Program 25: Sum of Array Elements
   Compile: gcc program_025.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sum of all elements in an array
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}
