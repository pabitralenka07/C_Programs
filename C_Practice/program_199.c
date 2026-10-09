/* Program 199: Stack Implement Stack Using Two Queues
   Compile: gcc program_199.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Implement stack using two queues (push costly approach)
int q1[100],q1f=0,q1r=0;
int q2[100],q2f=0,q2r=0;

void push(int x){
    // Enqueue to q2, move all q1 to q2, swap
    q2[q2r++]=x;
    while(q1f<q1r) q2[q2r++]=q1[q1f++];
    int *tmp=q1; // just swap conceptually via indices
    int tf=q1f,tr=q1r; q1f=q2f; q1r=q2r; q2f=tf; q2r=tr;
    // reset q2
    q2f=0; q2r=0;
}
int pop(){ return q1f<q1r ? q1[q1f++] : -1; }

int main(){
    push(1); push(2); push(3);
    printf("%d\n",pop()); // 3
    printf("%d\n",pop()); // 2
    return 0;
}
