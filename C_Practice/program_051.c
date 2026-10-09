/* Program 51: Pattern Right Triangle Stars
   Compile: gcc program_051.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Right triangle star pattern
// Output for n=4:
// *
// * *
// * * *
// * * * *
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
