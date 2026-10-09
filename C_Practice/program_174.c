/* Program 174: Linked List Delete Node
   Compile: gcc program_174.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Delete first occurrence of a value from linked list
struct Node { int data; struct Node *next; };

struct Node* deleteNode(struct Node *head, int val) {
    if (!head) return NULL;
    if (head->data == val) {
        struct Node *t = head->next; free(head); return t;
    }
    struct Node *curr = head;
    while (curr->next && curr->next->data != val) curr = curr->next;
    if (curr->next) {
        struct Node *t = curr->next; curr->next = t->next; free(t);
    }
    return head;
}
int main() {
    // Build 10->20->30
    struct Node *n3=malloc(sizeof(struct Node)); n3->data=30; n3->next=NULL;
    struct Node *n2=malloc(sizeof(struct Node)); n2->data=20; n2->next=n3;
    struct Node *n1=malloc(sizeof(struct Node)); n1->data=10; n1->next=n2;
    struct Node *head = n1;
    head = deleteNode(head, 20);
    for (struct Node *t=head; t; t=t->next) printf("%d ", t->data);
    printf("\n");
    return 0;
}
