/* Program 105: Recursion Palindrome Check String
   Compile: gcc program_105.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Check palindrome string using recursion
int isPalin(char s[], int l, int r) {
    if (l >= r) return 1;
    if (s[l] != s[r]) return 0;
    return isPalin(s, l + 1, r - 1);
}

int main() {
    char s[] = "racecar";
    printf(isPalin(s, 0, strlen(s) - 1) ? "Palindrome\n" : "Not\n");
    return 0;
}
