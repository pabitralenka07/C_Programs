/* Program 20: Check Vowel or Consonant
   Compile: gcc program_020.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if character is vowel or consonant
int main() {
    char c;
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z') c += 32; // to lowercase
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("Vowel\n");
    else
        printf("Consonant\n");
    return 0;
}
