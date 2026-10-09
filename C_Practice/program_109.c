/* Program 109: Recursion Reverse String
   Compile: gcc program_109.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Reverse a string using recursion
void revStr(char s[], int l, int r) {
    if (l >= r) return;
    char t = s[l]; s[l] = s[r]; s[r] = t;
    revStr(s, l + 1, r - 1);
}

int main() {
    char s[] = "hello";
    revStr(s, 0, strlen(s) - 1);
    printf("%s\n", s);
    return 0;
}
