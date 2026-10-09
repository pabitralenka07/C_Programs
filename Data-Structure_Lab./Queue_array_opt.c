// Write a C program to create a queue using an array andperform – (i) Insertion; (ii) Deletion; (iii) Traversal . 

#include <stdio.h>
#define MAX 5 
int queue[MAX];
int front = -1, rear = -1;
void insert(int value) {
if (rear == MAX - 1) {
printf("Queue Overflow! Cannot insert %d\n", value);
} else {
if (front == -1)
front = 0;
rear++;
queue[rear] = value;
printf("Inserted %d\n", value);
}
}
void delete() {
if (front == -1 || front > rear) {
printf("Queue Underflow! No element to delete\n");
} else {
printf("Deleted %d\n", queue[front]);
front++;
}
}
void traverse() {
if (front == -1 || front > rear) {
printf("Queue is empty\n");
} else {
printf("Queue elements are: ");
for (int i = front; i <= rear; i++) {
printf("%d ", queue[i]);
}
printf("\n");
}
}
int main() {
int choice, value;
while (1) {
printf("\n--- Queue Menu ---\n");
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Traverse\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value to insert: ");
scanf("%d", &value);
insert(value);
break;
case 2:
delete();
break;
case 3:
traverse();
break;
case 4:
printf("Exiting...\n");
return 0;
default:
printf("Invalid choice! Please try again.\n");
}
}
return 0;
}
