/* Program 177: Linked List Length
   Compile: gcc program_177.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Find length (number of nodes) of a linked list
struct Node { int data; struct Node *next; };

int main() {
    int vals[]={10,20,30,40}, n=4;
    struct Node *head=NULL, *temp=NULL;
    for(int i=0;i<n;i++){
        struct Node *nd=malloc(sizeof(struct Node));
        nd->data=vals[i]; nd->next=NULL;
        if(!head) head=temp=nd; else {temp->next=nd; temp=nd;}
    }
    int len=0;
    for(struct Node *t=head;t;t=t->next) len++;
    printf("Length = %d\n",len);
    return 0;
}
