/* Program 17: Check Alphabet Digit Special
   Compile: gcc program_017.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if character is alphabet, digit, or special
int main() {
    char c;
    scanf(" %c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("Alphabet\n");
    else if (c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("Special Character\n");
    return 0;
}
