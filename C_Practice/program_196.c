/* Program 196: Queue Generate Binary Numbers
   Compile: gcc program_196.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// Generate binary numbers 1..N using a queue
int main(){
    int n;
    scanf("%d",&n);
    char queue[100][50];
    int front=0,rear=0;
    strcpy(queue[rear++],"1");
    for(int i=0;i<n;i++){
        printf("%s\n",queue[front]);
        char s0[50],s1[50];
        strcpy(s0,queue[front]); strcat(s0,"0"); strcpy(queue[rear++],s0);
        strcpy(s1,queue[front]); strcat(s1,"1"); strcpy(queue[rear++],s1);
        front++;
    }
    return 0;
}
