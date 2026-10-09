/* Program 131: Palindrome String Check
   Compile: gcc program_131.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Check if string is palindrome
int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s), flag = 1;
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - i - 1]) { flag = 0; break; }
    printf(flag ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}
