// Q6. Write a C program using functions to perform Creation, Insertion, Deletion in a Binary Tree

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* create(int x){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->left=new->right=NULL;
    return new;
}

struct node* insert(struct node* root,int x){
    if(root==NULL) return create(x);
    if(x<root->data) root->left=insert(root->left,x);
    else root->right=insert(root->right,x);
    return root;
}

void inorder(struct node* root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node* root=NULL;
    root=insert(root,10);
    insert(root,5);
    insert(root,20);
    inorder(root);
}
