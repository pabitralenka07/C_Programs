// Traversal operation.

#include <stdio.h>
#define MAX 5 
int stack[MAX];
int top = -1;
void push(int item) 
{
    if (top == MAX - 1) 
    {
        printf("Stack Overflow! Cannot push %d\n", item);
    }
    else
    {
        top++;
        stack[top] = item;
        printf("%d pushed into stack.\n", item);
    }
}
void pop() 
{
    if (top == -1) 
    {
        printf("Stack Underflow! No element to pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
            }
}
void display() 
{
    if (top == -1) 
    {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) 
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
            }
}
int main() 
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    push(40);
    push(50);
    push(60);
    display();
    return 0;
}
void traverse() 
{
    if (top == -1) 
    {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d ", stack[i]);
        }
    printf("\n");
            }
}
