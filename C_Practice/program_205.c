/* Program 205: Binary Tree Height
   Compile: gcc program_205.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Height (max depth) of a binary tree
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

int height(struct Node *r){
    if(!r) return 0;
    int l=height(r->left), ri=height(r->right);
    return 1+(l>ri?l:ri);
}
int main(){
    struct Node *root=newNode(1);
    root->left=newNode(2); root->right=newNode(3);
    root->left->left=newNode(4);
    printf("Height = %d\n",height(root));
    return 0;
}
