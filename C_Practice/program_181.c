/* Program 181: Stack Using Array
   Compile: gcc program_181.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define SIZE 50
// Stack implementation using array
int stack[SIZE], top = -1;

void push(int x) { if(top<SIZE-1) stack[++top]=x; else printf("Overflow\n"); }
void pop()       { if(top>=0) top--; else printf("Underflow\n"); }
int peek()       { return top>=0 ? stack[top] : -1; }

int main() {
    push(10); push(20); push(30);
    printf("Top: %d\n", peek());
    pop();
    printf("After pop, top: %d\n", peek());
    return 0;
}
