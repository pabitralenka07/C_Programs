// Reverse a String using Stack in C.

#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char c) {
if (top == MAX - 1) {
printf("Stack Overflow!\n");
} else {
stack[++top] = c;
}
}
char pop() {
if (top == -1) {
printf("Stack Underflow!\n");
return '\0';
} else {
return stack[top--];
}
}
void reverseString(char str[]) {
int i;
for (i = 0; str[i] != '\0'; i++) {
push(str[i]);
}
for (i = 0; str[i] != '\0'; i++) {
str[i] = pop();
}
}
int main() {
char str[MAX];
printf("Enter a string: ");
gets(str);
reverseString(str);
printf("Reversed string: %s\n", str);
return 0;
}
