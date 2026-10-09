/* Program 171: Linked List Create and Traverse
   Compile: gcc program_171.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Create a singly linked list and traverse it
struct Node { int data; struct Node *next; };

int main() {
    int n, x;
    scanf("%d", &n);
    struct Node *head = NULL, *temp = NULL;
    for (int i = 0; i < n; i++) {
        struct Node *newNode = malloc(sizeof(struct Node));
        scanf("%d", &x);
        newNode->data = x; newNode->next = NULL;
        if (!head) head = temp = newNode;
        else { temp->next = newNode; temp = newNode; }
    }
    for (temp = head; temp; temp = temp->next) printf("%d ", temp->data);
    printf("\n");
    return 0;
}
