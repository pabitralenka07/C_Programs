/* Program 188: Stack Sort Using Recursion
   Compile: gcc program_188.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sort a stack using recursion (no extra array)
int stack[100], top=-1;

void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }
int isEmpty(){ return top==-1; }

void sortedInsert(int x){
    if(isEmpty()||x>stack[top]){ push(x); return; }
    int t=pop();
    sortedInsert(x);
    push(t);
}
void sortStack(){
    if(isEmpty()) return;
    int t=pop();
    sortStack();
    sortedInsert(t);
}
int main(){
    push(3); push(1); push(4); push(1); push(5);
    sortStack();
    while(!isEmpty()) printf("%d ",pop());
    printf("\n");
    return 0;
}
