/* Program 202: Binary Tree Preorder Traversal
   Compile: gcc program_202.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Preorder traversal: Root -> Left -> Right
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

void preorder(struct Node *r){ if(r){ printf("%d ",r->data); preorder(r->left); preorder(r->right); } }

int main(){
    struct Node *root=newNode(1);
    root->left=newNode(2); root->right=newNode(3);
    root->left->left=newNode(4); root->left->right=newNode(5);
    preorder(root); printf("\n");
    return 0;
}
