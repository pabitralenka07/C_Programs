/* Program 184: Stack Infix to Postfix
   Compile: gcc program_184.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Convert infix expression to postfix (operators +,-,*,/)
int prec(char c){ if(c=='*'||c=='/') return 2; if(c=='+'||c=='-') return 1; return 0; }
int isOp(char c){ return c=='+'||c=='-'||c=='*'||c=='/'; }

int main(){
    char in[100], out[100], stack[100];
    int top=-1, k=0;
    scanf("%s",in);
    for(int i=0;i<(int)strlen(in);i++){
        char c=in[i];
        if(c>='a'&&c<='z') out[k++]=c;
        else if(c=='(') stack[++top]=c;
        else if(c==')'){
            while(top>=0&&stack[top]!='(') out[k++]=stack[top--];
            top--; // pop '('
        } else if(isOp(c)){
            while(top>=0&&prec(stack[top])>=prec(c)) out[k++]=stack[top--];
            stack[++top]=c;
        }
    }
    while(top>=0) out[k++]=stack[top--];
    out[k]='\0';
    printf("%s\n",out);
    return 0;
}
