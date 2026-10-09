/* Program 91: Function Reverse Number
   Compile: gcc program_091.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to reverse a number
int reverse(int n) {
    int rev = 0;
    while (n) { rev = rev * 10 + n % 10; n /= 10; }
    return rev;
}

int main() {
    printf("%d\n", reverse(1234));
    return 0;
}
