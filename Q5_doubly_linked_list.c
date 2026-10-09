// Q5. Write a C program using functions to perform Creation, Insertion, Deletion, Traversal in double linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
};

struct node *head=NULL;

void insert(int x){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->prev=NULL;
    new->next=head;
    if(head) head->prev=new;
    head=new;
}

void display(){
    struct node *temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    insert(10); insert(20); insert(30);
    display();
}
