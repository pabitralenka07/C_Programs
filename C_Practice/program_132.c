/* Program 132: Count Vowels and Consonants
   Compile: gcc program_132.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Count vowels and consonants in a string
int main() {
    char s[100];
    int v = 0, c = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        char ch = s[i] | 32; // to lower
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("Vowels=%d Consonants=%d\n", v, c);
    return 0;
}
