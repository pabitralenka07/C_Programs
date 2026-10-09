/* Program 82: Function Check Even Odd
   Compile: gcc program_082.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to check even or odd
void check(int n) {
    printf(n % 2 == 0 ? "Even\n" : "Odd\n");
}

int main() {
    int n; scanf("%d", &n);
    check(n);
    return 0;
}
