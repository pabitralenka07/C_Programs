// Reverse string using stack

#include <stdio.h>

#define MAX 100
char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        push(str[i]);
        i++;
    }

    printf("Reversed = ");
    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}
