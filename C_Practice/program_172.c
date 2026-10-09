/* Program 172: Linked List Insert at Beginning
   Compile: gcc program_172.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Insert a new node at the beginning of linked list
struct Node { int data; struct Node *next; };

struct Node* insertBegin(struct Node *head, int val) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = val; n->next = head;
    return n;
}
int main() {
    struct Node *head = NULL;
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    for (struct Node *t=head; t; t=t->next) printf("%d ", t->data);
    printf("\n");
    return 0;
}
