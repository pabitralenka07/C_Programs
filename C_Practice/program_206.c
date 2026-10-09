/* Program 206: BST Delete Node
   Compile: gcc program_206.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Delete a node from BST maintaining BST property
struct Node { int data; struct Node *left,*right; };
struct Node* newNode(int d){ struct Node *n=malloc(sizeof(struct Node)); n->data=d; n->left=n->right=NULL; return n; }

struct Node* minNode(struct Node *r){ while(r->left) r=r->left; return r; }

struct Node* deleteNode(struct Node *r, int d){
    if(!r) return NULL;
    if(d<r->data) r->left=deleteNode(r->left,d);
    else if(d>r->data) r->right=deleteNode(r->right,d);
    else {
        if(!r->left){ struct Node *t=r->right; free(r); return t; }
        if(!r->right){ struct Node *t=r->left; free(r); return t; }
        struct Node *s=minNode(r->right);
        r->data=s->data;
        r->right=deleteNode(r->right,s->data);
    }
    return r;
}
void inorder(struct Node *r){ if(r){ inorder(r->left); printf("%d ",r->data); inorder(r->right); } }

int main(){
    struct Node *root=NULL;
    int v[]={5,3,7,1,4};
    for(int i=0;i<5;i++) root=newNode(v[i]),(root=({
        struct Node *tmp=root;
        // rebuild cleanly
        (void)tmp; NULL;
    }));
    // Rebuild properly
    root=NULL;
    for(int i=0;i<5;i++){
        if(!root){root=newNode(v[i]);}
        else{
            struct Node *cur=root;
            while(1){ if(v[i]<cur->data){ if(!cur->left){cur->left=newNode(v[i]);break;} cur=cur->left;} else{ if(!cur->right){cur->right=newNode(v[i]);break;} cur=cur->right;} }
        }
    }
    root=deleteNode(root,3);
    inorder(root); printf("\n");
    return 0;
}
