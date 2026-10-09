/* Program 197: Queue Level Order Tree Traversal
   Compile: gcc program_197.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Level-order (BFS) traversal of a binary tree using queue
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

int main(){
    struct Node *root=newNode(1);
    root->left=newNode(2); root->right=newNode(3);
    root->left->left=newNode(4); root->left->right=newNode(5);

    struct Node *queue[100]; int f=0,r=0;
    queue[r++]=root;
    while(f<r){
        struct Node *cur=queue[f++];
        printf("%d ",cur->data);
        if(cur->left) queue[r++]=cur->left;
        if(cur->right) queue[r++]=cur->right;
    }
    printf("\n");
    return 0;
}
