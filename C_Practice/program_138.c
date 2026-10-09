/* Program 138: Count Words in String
   Compile: gcc program_138.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Count number of words in a sentence
int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    int count = 0, inWord = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            if (!inWord) { count++; inWord = 1; }
        } else inWord = 0;
    }
    printf("Words = %d\n", count);
    return 0;
}
