/* Program 180: Doubly Linked List
   Compile: gcc program_180.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Doubly linked list: insert and traverse both ways
struct DNode { int data; struct DNode *prev, *next; };

int main() {
    int vals[]={10,20,30};
    struct DNode *head=NULL, *tail=NULL;
    for(int i=0;i<3;i++){
        struct DNode *n=malloc(sizeof(struct DNode));
        n->data=vals[i]; n->next=NULL; n->prev=tail;
        if(!head) head=n; else tail->next=n;
        tail=n;
    }
    printf("Forward : ");
    for(struct DNode *t=head;t;t=t->next) printf("%d ",t->data);
    printf("\nBackward: ");
    for(struct DNode *t=tail;t;t=t->prev) printf("%d ",t->data);
    printf("\n");
    return 0;
}
