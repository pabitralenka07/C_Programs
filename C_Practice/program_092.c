/* Program 92: Function Check Palindrome Number
   Compile: gcc program_092.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Function to check if number is palindrome
int isPalindrome(int n) {
    int temp = n, rev = 0;
    while (n) { rev = rev * 10 + n % 10; n /= 10; }
    return temp == rev;
}

int main() {
    printf("%d\n", isPalindrome(121));
    return 0;
}
