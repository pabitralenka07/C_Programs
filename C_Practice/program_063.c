/* Program 63: Pattern Reverse Number Triangle
   Compile: gcc program_063.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Reverse number triangle
// 4 3 2 1
// 3 2 1
// 2 1
// 1
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
