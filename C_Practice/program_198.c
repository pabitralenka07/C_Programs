/* Program 198: Stack Queue Implement Queue Using Two Stacks
   Compile: gcc program_198.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Implement queue using two stacks
int s1[100],t1=-1, s2[100],t2=-1;

void enqueue(int x){ s1[++t1]=x; }
int dequeue(){
    if(t2==-1){
        while(t1>=0) s2[++t2]=s1[t1--];
    }
    return t2>=0 ? s2[t2--] : -1;
}
int main(){
    enqueue(1); enqueue(2); enqueue(3);
    printf("%d\n",dequeue()); // 1
    enqueue(4);
    printf("%d\n",dequeue()); // 2
    printf("%d\n",dequeue()); // 3
    return 0;
}
