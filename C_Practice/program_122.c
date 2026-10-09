/* Program 122: Frequency of Array Elements
   Compile: gcc program_122.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print frequency of each distinct element
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int visited[n];
    for (int i = 0; i < n; i++) visited[i] = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int cnt = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[j] == arr[i]) { cnt++; visited[j] = 1; }
        printf("%d -> %d\n", arr[i], cnt);
    }
    return 0;
}
