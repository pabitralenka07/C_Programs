// Find length of string without using strlen()

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);
    return 0;
}
