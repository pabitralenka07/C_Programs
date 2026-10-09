/* Program 183: Stack Check Balanced Parentheses
   Compile: gcc program_183.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Check balanced (), [], {} using a character stack
int main() {
    char s[200], stack[200];
    int top=-1;
    scanf("%s",s);
    for(int i=0;i<(int)strlen(s);i++){
        char c=s[i];
        if(c=='('||c=='['||c=='{') stack[++top]=c;
        else if(c==')'||c==']'||c=='}'){
            if(top<0) { printf("Not Balanced\n"); return 0; }
            char o=stack[top--];
            if((c==')'&&o!='(')||(c==']'&&o!='[')||(c=='}'&&o!='{'))
            { printf("Not Balanced\n"); return 0; }
        }
    }
    printf(top==-1 ? "Balanced\n" : "Not Balanced\n");
    return 0;
}
