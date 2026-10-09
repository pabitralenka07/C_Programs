/* Program 186: Stack Reverse String Using Stack
   Compile: gcc program_186.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Reverse a string using a stack
int main(){
    char s[100], stack[100];
    int top=-1;
    scanf("%s",s);
    for(int i=0;s[i];i++) stack[++top]=s[i];
    int i=0;
    while(top>=0) s[i++]=stack[top--];
    printf("%s\n",s);
    return 0;
}
