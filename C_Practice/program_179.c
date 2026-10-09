/* Program 179: Linked List Detect Loop
   Compile: gcc program_179.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Detect loop in linked list using Floyd's cycle detection
struct Node { int data; struct Node *next; };

int main() {
    struct Node *a=malloc(sizeof(struct Node));
    struct Node *b=malloc(sizeof(struct Node));
    struct Node *c=malloc(sizeof(struct Node));
    a->data=1; b->data=2; c->data=3;
    a->next=b; b->next=c; c->next=b; // loop: c->b

    struct Node *slow=a, *fast=a;
    int loop=0;
    while(fast && fast->next){
        slow=slow->next; fast=fast->next->next;
        if(slow==fast){ loop=1; break; }
    }
    printf(loop ? "Loop detected\n" : "No loop\n");
    return 0;
}
