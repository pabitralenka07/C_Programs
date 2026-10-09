/* Program 135: Concatenate Two Strings
   Compile: gcc program_135.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Concatenate two strings manually
int main() {
    char a[200], b[100];
    scanf("%s %s", a, b);
    int i = strlen(a), j = 0;
    while (b[j]) a[i++] = b[j++];
    a[i] = '\0';
    printf("%s\n", a);
    return 0;
}
