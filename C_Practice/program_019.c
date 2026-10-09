/* Program 19: Lowercase to Uppercase
   Compile: gcc program_019.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Convert lowercase to uppercase manually
int main() {
    char c;
    scanf(" %c", &c);
    if (c >= 'a' && c <= 'z')
        printf("%c\n", c - 32);
    else
        printf("%c\n", c);
    return 0;
}
