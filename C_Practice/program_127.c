/* Program 127: String Length Manual
   Compile: gcc program_127.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find string length without strlen
int main() {
    char s[100];
    int len = 0;
    scanf("%s", s);
    while (s[len] != '\0') len++;
    printf("Length = %d\n", len);
    return 0;
}
