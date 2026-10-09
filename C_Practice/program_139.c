/* Program 139: Convert String to Integer
   Compile: gcc program_139.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Convert numeric string to integer (atoi equivalent)
int main() {
    char s[20];
    scanf("%s", s);
    int result = 0, sign = 1, i = 0;
    if (s[0] == '-') { sign = -1; i = 1; }
    for (; s[i]; i++) result = result * 10 + (s[i] - '0');
    printf("%d\n", sign * result);
    return 0;
}
