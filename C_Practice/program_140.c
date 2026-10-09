/* Program 140: Convert Integer to String
   Compile: gcc program_140.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Convert integer to string (itoa equivalent)
int main() {
    int n;
    scanf("%d", &n);
    char s[20];
    int i = 0, neg = 0;
    if (n < 0) { neg = 1; n = -n; }
    if (n == 0) { printf("0\n"); return 0; }
    while (n) { s[i++] = '0' + n % 10; n /= 10; }
    if (neg) s[i++] = '-';
    s[i] = '\0';
    // reverse
    int l = 0, r = i - 1;
    while (l < r) { char t=s[l]; s[l]=s[r]; s[r]=t; l++; r--; }
    printf("%s\n", s);
    return 0;
}
