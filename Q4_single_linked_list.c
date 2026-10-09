// Q4. Write a C program using functions to perform Creation, Insertion, Deletion, Traversal in single linked list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert(int x){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=head;
    head=new;
}

void delete(){
    if(head==NULL) return;
    struct node *temp=head;
    head=head->next;
    free(temp);
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
    delete();
    display();
}
