// Q2. Write a C program to create a stack using an array and perform PUSH, POP, Traversal

#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x){
    if(top==MAX-1) printf("Overflow\n");
    else stack[++top]=x;
}

void pop(){
    if(top==-1) printf("Underflow\n");
    else printf("Popped: %d\n", stack[top--]);
}

void display(){
    for(int i=top;i>=0;i--) printf("%d ", stack[i]);
    printf("\n");
}

int main(){
    push(10); push(20); push(30);
    display();
    pop();
    display();
}
