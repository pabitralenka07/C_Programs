/* Program 176: Linked List Reverse
   Compile: gcc program_176.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Reverse a singly linked list iteratively
struct Node { int data; struct Node *next; };

int main() {
    // Build 1->2->3->4->5
    struct Node *head = NULL;
    for (int i = 5; i >= 1; i--) {
        struct Node *n = malloc(sizeof(struct Node));
        n->data = i; n->next = head; head = n;
    }
    // Reverse
    struct Node *prev=NULL, *curr=head, *next=NULL;
    while(curr){ next=curr->next; curr->next=prev; prev=curr; curr=next; }
    head=prev;
    for(struct Node *t=head;t;t=t->next) printf("%d ",t->data);
    printf("\n");
    return 0;
}
