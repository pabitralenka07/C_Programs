/* Program 123: Merge Two Sorted Arrays
   Compile: gcc program_123.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Merge two already-sorted arrays into one sorted array
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[n + m];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
    for (int x = 0; x < n + m; x++) printf("%d ", c[x]);
    printf("\n");
    return 0;
}
