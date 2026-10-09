// Stack using array (push & pop)

#include <stdio.h>

int stack[5], top = -1;

void push(int x){
    if(top == 4)
        printf("Overflow\n");
    else
        stack[++top] = x;
}

void pop(){
    if(top == -1)
        printf("Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

int main(){
    push(10);
    push(20);
    pop();
    return 0;
}