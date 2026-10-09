// Q3. Write a C program to create a queue using an array and perform Insertion, Deletion, Traversal

#include <stdio.h>
#define MAX 5

int queue[MAX], front=-1, rear=-1;

void insert(int x){
    if(rear==MAX-1) printf("Overflow\n");
    else{
        if(front==-1) front=0;
        queue[++rear]=x;
    }
}

void delete(){
    if(front==-1) printf("Underflow\n");
    else{
        printf("Deleted: %d\n", queue[front++]);
        if(front>rear) front=rear=-1;
    }
}

void display(){
    for(int i=front;i<=rear;i++) printf("%d ",queue[i]);
    printf("\n");
}

int main(){
    insert(10); insert(20); insert(30);
    display();
    delete();
    display();
}
