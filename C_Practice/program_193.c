/* Program 193: Queue Using Linked List
   Compile: gcc program_193.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Queue with linked list: O(1) enqueue and dequeue
struct Node { int data; struct Node *next; };
struct Node *qfront=NULL, *qrear=NULL;

void enqueue(int x){
    struct Node *n=malloc(sizeof(struct Node));
    n->data=x; n->next=NULL;
    if(!qrear){ qfront=qrear=n; return; }
    qrear->next=n; qrear=n;
}
int dequeue(){
    if(!qfront){ printf("Empty\n"); return -1; }
    int v=qfront->data;
    struct Node *t=qfront; qfront=qfront->next;
    if(!qfront) qrear=NULL;
    free(t); return v;
}
int main(){
    enqueue(1); enqueue(2); enqueue(3);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    return 0;
}
