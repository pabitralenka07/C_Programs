/* Program 201: Binary Tree Inorder Traversal
   Compile: gcc program_201.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Inorder traversal: Left -> Root -> Right
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

void inorder(struct Node *r){ if(r){ inorder(r->left); printf("%d ",r->data); inorder(r->right); } }

int main(){
    struct Node *root=newNode(4);
    root->left=newNode(2); root->right=newNode(6);
    root->left->left=newNode(1); root->left->right=newNode(3);
    root->right->left=newNode(5); root->right->right=newNode(7);
    inorder(root); printf("\n");
    return 0;
}
