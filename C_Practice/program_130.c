/* Program 130: Reverse String
   Compile: gcc program_130.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Reverse a string in place
int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        char t = s[i]; s[i] = s[n - i - 1]; s[n - i - 1] = t;
    }
    printf("%s\n", s);
    return 0;
}
