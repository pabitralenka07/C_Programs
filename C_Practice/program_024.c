/* Program 24: Input and Display Array of 5
   Compile: gcc program_024.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Input and display array of 5 elements
int main() {
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
