/* Program 111: Array Insert Element
   Compile: gcc program_111.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Insert element at a given position in array
int main() {
    int arr[100], n, pos, val;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &val);
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
