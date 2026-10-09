/* Program 32: Count Odd Numbers in Array
   Compile: gcc program_032.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Count odd numbers in an array
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) count++;
    printf("Odd count = %d\n", count);
    return 0;
}
