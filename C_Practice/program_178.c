/* Program 178: Linked List Middle Node
   Compile: gcc program_178.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Find middle node using slow/fast pointer technique
struct Node { int data; struct Node *next; };

int main() {
    int vals[]={1,2,3,4,5}, n=5;
    struct Node *head=NULL, *tail=NULL;
    for(int i=0;i<n;i++){
        struct Node *nd=malloc(sizeof(struct Node));
        nd->data=vals[i]; nd->next=NULL;
        if(!head) head=tail=nd; else {tail->next=nd; tail=nd;}
    }
    struct Node *slow=head, *fast=head;
    while(fast && fast->next){ slow=slow->next; fast=fast->next->next; }
    printf("Middle = %d\n", slow->data);
    return 0;
}
