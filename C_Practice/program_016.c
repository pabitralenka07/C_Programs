/* Program 16: ASCII Value of Character
   Compile: gcc program_016.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Print ASCII value of a character
int main() {
    char c;
    scanf(" %c", &c);
    printf("ASCII of %c = %d\n", c, c);
    return 0;
}
