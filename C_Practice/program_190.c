/* Program 190: Stack Valid Parentheses Multiple Types
   Compile: gcc program_190.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Count minimum bracket additions to make string valid
int main(){
    char s[200];
    scanf("%s",s);
    int open=0, close=0;
    for(int i=0;i<(int)strlen(s);i++){
        if(s[i]=='(') open++;
        else if(s[i]==')'){
            if(open>0) open--;
            else close++;
        }
    }
    printf("Minimum additions needed: %d\n",open+close);
    return 0;
}
