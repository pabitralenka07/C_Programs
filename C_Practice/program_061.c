#include <stdio.h>
// Number triangle: each row prints 1..i
// 1
// 1 2
// 1 2 3
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
