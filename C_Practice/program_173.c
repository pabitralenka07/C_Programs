/* Program 173: Linked List Insert at End
   Compile: gcc program_173.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Insert a new node at the end of linked list
struct Node { int data; struct Node *next; };

struct Node* insertEnd(struct Node *head, int val) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = val; n->next = NULL;
    if (!head) return n;
    struct Node *t = head;
    while (t->next) t = t->next;
    t->next = n;
    return head;
}
int main() {
    struct Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    for (struct Node *t=head; t; t=t->next) printf("%d ", t->data);
    printf("\n");
    return 0;
}
