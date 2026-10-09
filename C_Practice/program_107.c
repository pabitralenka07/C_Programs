/* Program 107: Recursion Sum of Digits
   Compile: gcc program_107.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sum digits of a number using recursion
int digitSum(int n) {
    if (n == 0) return 0;
    return n % 10 + digitSum(n / 10);
}

int main() {
    printf("%d\n", digitSum(1234));
    return 0;
}
