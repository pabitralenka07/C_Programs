/* Program 26: Average of Numbers
   Compile: gcc program_026.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Calculate average of n numbers
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}
