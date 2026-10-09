/* Program 136: Find Substring
   Compile: gcc program_136.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Check if pattern exists in text (naive)
int main() {
    char text[200], pat[100];
    scanf("%s %s", text, pat);
    int tlen = strlen(text), plen = strlen(pat);
    for (int i = 0; i <= tlen - plen; i++) {
        int j;
        for (j = 0; j < plen; j++)
            if (text[i + j] != pat[j]) break;
        if (j == plen) { printf("Found at %d\n", i); return 0; }
    }
    printf("Not Found\n");
    return 0;
}
