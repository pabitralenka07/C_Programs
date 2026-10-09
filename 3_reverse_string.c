// Reverse a string

#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j = 0;

    printf("Enter string: ");
    scanf("%s", str);

    while (str[i] != '\0') i++;

    i--; // last index

    while (i >= 0) {
        rev[j++] = str[i--];
    }

    rev[j] = '\0';

    printf("Reversed = %s", rev);
    return 0;
}
