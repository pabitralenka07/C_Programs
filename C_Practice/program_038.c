/* Program 38: Palindrome Number
   Compile: gcc program_038.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if a number is a palindrome
int main() {
    int n, temp, rev = 0;
    scanf("%d", &n);
    temp = n;
    while (n != 0) { rev = rev * 10 + n % 10; n /= 10; }
    printf(temp == rev ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
