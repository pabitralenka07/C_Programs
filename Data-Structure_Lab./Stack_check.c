//  Write a program to check if the stack isfull() or not ?

#include <stdio.h>
#define MAX 5 
int stack[MAX];
int top = -1;
int isFull() 
    {
        if (top == MAX - 1) 
        {
        return 1;
        } else {
        return 0; 
        }
    }
void push(int value) 
{
    if (isFull()) 
    {
        printf("Stack Overflow ! Cannot push %d\n", value);
        } else {
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
        }
}
void display() 
{
    if (top == -1) 
    {
        printf("Stack is empty !\n");
        } else {
            printf("Stack elements : ");
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
    push(40);
    push(50);
    if (isFull()) 
    {
        printf("Yes, the stack is full !\n");
        } else {
        printf("No, the stack is not full .\n");
        }
        display();
        return 0;
        push(60);
}
