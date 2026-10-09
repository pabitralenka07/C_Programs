/* Program 189: Stack Min Stack
   Compile: gcc program_189.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Min stack: getMin() in O(1) using auxiliary stack
int main_stack[100], min_stack[100], top=-1, mintop=-1;

void push(int x){
    main_stack[++top]=x;
    if(mintop==-1||x<=min_stack[mintop]) min_stack[++mintop]=x;
}
void pop(){
    if(top<0) return;
    if(main_stack[top]==min_stack[mintop]) mintop--;
    top--;
}
int getMin(){ return min_stack[mintop]; }

int main(){
    push(5); push(3); push(7); push(2);
    printf("Min: %d\n",getMin());
    pop(); pop();
    printf("Min after 2 pops: %d\n",getMin());
    return 0;
}
