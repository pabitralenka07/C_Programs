/* Program 203: Binary Tree Postorder Traversal
   Compile: gcc program_203.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Postorder traversal: Left -> Right -> Root
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

void postorder(struct Node *r){ if(r){ postorder(r->left); postorder(r->right); printf("%d ",r->data); } }

int main(){
    struct Node *root=newNode(1);
    root->left=newNode(2); root->right=newNode(3);
    root->left->left=newNode(4); root->left->right=newNode(5);
    postorder(root); printf("\n");
    return 0;
}
