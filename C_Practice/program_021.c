/* Program 21: Calculator Using Switch
   Compile: gcc program_021.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Simple calculator using switch
int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': printf("%d\n", a / b); break;
        default:  printf("Invalid\n");
    }
    return 0;
}
