/* Program 192: Circular Queue
   Compile: gcc program_192.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define SIZE 5
// Circular queue avoids wasted space after dequeues
int queue[SIZE], front=-1, rear=-1;

int isFull(){ return (rear+1)%SIZE==front; }
int isEmpty(){ return front==-1; }

void enqueue(int x){
    if(isFull()){ printf("Full\n"); return; }
    if(isEmpty()) front=0;
    rear=(rear+1)%SIZE;
    queue[rear]=x;
}
void dequeue(){
    if(isEmpty()){ printf("Empty\n"); return; }
    printf("Dequeued: %d\n",queue[front]);
    if(front==rear){ front=rear=-1; } // now empty
    else front=(front+1)%SIZE;
}
int main(){
    enqueue(1); enqueue(2); enqueue(3);
    dequeue(); dequeue();
    enqueue(4); enqueue(5);
    printf("Front of queue: %d\n",queue[front]);
    return 0;
}
