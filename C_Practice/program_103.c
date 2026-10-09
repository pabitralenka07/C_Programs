/* Program 103: Recursion Tower of Hanoi
   Compile: gcc program_103.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Tower of Hanoi recursive solution
// Moves n disks from src -> dst using aux
void toh(int n, char src, char dst, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, dst);
        return;
    }
    toh(n - 1, src, aux, dst);
    printf("Move disk %d from %c to %c\n", n, src, dst);
    toh(n - 1, aux, dst, src);
}

int main() {
    toh(3, 'A', 'C', 'B');
    return 0;
}
