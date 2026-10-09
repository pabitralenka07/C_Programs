/* Program 191: Queue Using Array
   Compile: gcc program_191.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define SIZE 50
// Queue using array (linear)
int queue[SIZE], front=0, rear=-1;

void enqueue(int x){ if(rear<SIZE-1) queue[++rear]=x; else printf("Full\n"); }
void dequeue(){ if(front<=rear) front++; else printf("Empty\n"); }
int peek(){ return queue[front]; }

int main(){
    enqueue(10); enqueue(20); enqueue(30);
    printf("Front: %d\n",peek());
    dequeue();
    printf("After dequeue, front: %d\n",peek());
    return 0;
}
