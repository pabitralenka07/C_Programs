/* Program 194: Deque Double Ended Queue
   Compile: gcc program_194.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define SIZE 10
// Deque: insert/delete from both ends
int deque[SIZE], front=SIZE/2, rear=SIZE/2-1;

void pushFront(int x){ if(front>0) deque[--front]=x; }
void pushRear(int x){  if(rear<SIZE-1) deque[++rear]=x; }
int  popFront(){ return (front<=rear)?deque[front++]:-1; }
int  popRear(){  return (front<=rear)?deque[rear--]:-1; }

int main(){
    pushRear(10); pushRear(20); pushFront(5);
    printf("PopFront: %d\n",popFront()); // 5
    printf("PopRear:  %d\n",popRear());  // 20
    return 0;
}
