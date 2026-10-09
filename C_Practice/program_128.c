/* Program 128: String Copy Manual
   Compile: gcc program_128.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Copy string manually without strcpy
int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    int i = 0;
    while (s1[i] != '\0') { s2[i] = s1[i]; i++; }
    s2[i] = '\0';
    printf("%s\n", s2);
    return 0;
}
