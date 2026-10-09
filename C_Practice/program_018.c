/* Program 18: Uppercase to Lowercase
   Compile: gcc program_018.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Convert uppercase to lowercase manually
int main() {
    char c;
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("%c\n", c + 32);
    else
        printf("%c\n", c);
    return 0;
}
