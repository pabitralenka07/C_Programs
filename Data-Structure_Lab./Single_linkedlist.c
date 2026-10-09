// Write a C program using functions to perform the following operations on a single linked-lists: (i) Creation; (ii) Insertion; (iii)Deletion ; (iv) Traversal .

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* createNode(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
return newNode;
}
void insert(int value) {
struct Node* newNode = createNode(value);
if (head == NULL) {
head = newNode;
} else {
struct Node* temp = head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
printf("Inserted %d\n", value);
}
void deleteNode(int value) {
if (head == NULL) {
printf("List is empty. Nothing to delete.\n");
return;
}
struct Node* temp = head;
struct Node* prev = NULL;
if (temp != NULL && temp->data == value) {
head = temp->next;
free(temp);
printf("Deleted %d\n", value);
return;
}
while (temp != NULL && temp->data != value) {
prev = temp;
temp = temp->next;
}
if (temp == NULL) {
printf("Element %d not found.\n", value);
return;
}
prev->next = temp->next;
free(temp);
printf("Deleted %d\n", value);
}
void traverse() {
if (head == NULL) {
printf("List is empty.\n");
return;
}
struct Node* temp = head;
printf("Linked List: ");
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
int main() {
int choice, value;
while (1) {
printf("\n--- Singly Linked List Menu ---\n");
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
printf("Enter value to delete: ");
scanf("%d", &value);
deleteNode(value);
break;
case 3:
traverse();
break;
case 4:
printf("Exiting...\n");
exit(0);
default:
printf("Invalid choice! Try again.\n");
}
}
return 0;
}
