/* Program 185: Stack Evaluate Postfix
   Compile: gcc program_185.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Evaluate a postfix expression (single-digit operands)
int main(){
    char expr[100];
    int stack[100], top=-1;
    scanf("%s",expr);
    for(int i=0;i<(int)strlen(expr);i++){
        char c=expr[i];
        if(c>='0'&&c<='9') stack[++top]=c-'0';
        else {
            int b=stack[top--], a=stack[top--];
            if(c=='+') stack[++top]=a+b;
            else if(c=='-') stack[++top]=a-b;
            else if(c=='*') stack[++top]=a*b;
            else if(c=='/') stack[++top]=a/b;
        }
    }
    printf("Result = %d\n",stack[top]);
    return 0;
}
