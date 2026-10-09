/* Program 175: Linked List Search Node
   Compile: gcc program_175.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Search for a value in linked list
struct Node { int data; struct Node *next; };

int main() {
    // Build 5->10->15->20
    int vals[] = {5,10,15,20};
    struct Node *head = NULL, *temp = NULL;
    for (int i=0;i<4;i++){
        struct Node *n=malloc(sizeof(struct Node));
        n->data=vals[i]; n->next=NULL;
        if(!head) head=temp=n; else { temp->next=n; temp=n; }
    }
    int key = 15;
    int pos = 0;
    for(struct Node *t=head; t; t=t->next, pos++)
        if(t->data==key){ printf("Found at position %d\n",pos); return 0; }
    printf("Not found\n");
    return 0;
}
