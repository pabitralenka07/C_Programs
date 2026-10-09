/* Program 134: Toggle Case of String
   Compile: gcc program_134.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Toggle uppercase <-> lowercase for each character
int main() {
    char s[100];
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        else if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
    printf("%s\n", s);
    return 0;
}
