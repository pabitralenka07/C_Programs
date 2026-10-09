/* Program 33: Merge Two Arrays
   Compile: gcc program_033.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Merge two arrays into one
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n + m];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n; i++) c[i] = a[i];
    for (int i = 0; i < m; i++) c[n + i] = b[i];
    for (int i = 0; i < n + m; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
