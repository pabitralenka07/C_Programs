/* Program 204: BST Insert and Search
   Compile: gcc program_204.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Binary Search Tree: insert nodes and search
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

struct Node* insert(struct Node *r, int d){
    if(!r) return newNode(d);
    if(d<r->data) r->left=insert(r->left,d);
    else if(d>r->data) r->right=insert(r->right,d);
    return r;
}
int search(struct Node *r, int d){
    if(!r) return 0;
    if(r->data==d) return 1;
    return d<r->data ? search(r->left,d) : search(r->right,d);
}
int main(){
    struct Node *root=NULL;
    int vals[]={5,3,7,1,4};
    for(int i=0;i<5;i++) root=insert(root,vals[i]);
    printf(search(root,4)?"Found 4\n":"Not found\n");
    printf(search(root,6)?"Found 6\n":"Not found\n");
    return 0;
}
