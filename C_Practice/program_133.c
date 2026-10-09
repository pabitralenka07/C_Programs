/* Program 133: Remove Spaces from String
   Compile: gcc program_133.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Remove spaces from a string
int main() {
    char s[200], res[200];
    int k = 0;
    // Use fgets to read with spaces
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; i++)
        if (s[i] != ' ') res[k++] = s[i];
    res[k] = '\0';
    printf("%s", res);
    return 0;
}
