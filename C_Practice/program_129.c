/* Program 129: String Compare Manual
   Compile: gcc program_129.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Compare two strings without strcmp
int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) i++;
    if (a[i] == b[i]) printf("Equal\n");
    else printf("Not Equal (diff: %d)\n", a[i] - b[i]);
    return 0;
}
