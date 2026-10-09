/* Program 182: Stack Using Linked List
   Compile: gcc program_182.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Stack using linked list (dynamic size)
struct Node { int data; struct Node *next; };
struct Node *top = NULL;

void push(int x) {
    struct Node *t=malloc(sizeof(struct Node));
    t->data=x; t->next=top; top=t;
}
int pop() {
    if(!top) { printf("Underflow\n"); return -1; }
    int v=top->data;
    struct Node *t=top; top=top->next; free(t);
    return v;
}
int main() {
    push(5); push(10); push(15);
    printf("Popped: %d\n", pop());
    printf("Top: %d\n", top->data);
    return 0;
}
