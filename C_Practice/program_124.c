/* Program 124: Intersection of Two Arrays
   Compile: gcc program_124.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print common elements between two arrays
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i] == b[j]) { printf("%d ", a[i]); break; }
    printf("\n");
    return 0;
}
