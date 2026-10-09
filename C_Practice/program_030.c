/* Program 30: Copy Array
   Compile: gcc program_030.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Copy elements of one array to another
int main() {
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) b[i] = a[i];
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
