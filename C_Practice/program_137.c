/* Program 137: Anagram Check
   Compile: gcc program_137.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Check if two strings are anagrams
int main() {
    char a[100], b[100];
    int freq[256] = {0};
    scanf("%s %s", a, b);
    if (strlen(a) != strlen(b)) { printf("Not Anagram\n"); return 0; }
    for (int i = 0; a[i]; i++) freq[(int)a[i]]++;
    for (int i = 0; b[i]; i++) freq[(int)b[i]]--;
    for (int i = 0; i < 256; i++)
        if (freq[i]) { printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}
