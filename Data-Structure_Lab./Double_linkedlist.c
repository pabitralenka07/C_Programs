// Write a C program using functions to perform the following operations on a double linked-lists: (i) Creation ; (ii) Insertion; (iii)Deletion ; (iv) Traversal

#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* prev;
struct Node* next;
};
struct Node* head = NULL;
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->prev = NULL;
newNode->next = NULL;
return newNode;
}
void insertEnd(int data) {
struct Node* newNode = createNode(data);
if (head == NULL) {
head = newNode;
return;
}
struct Node* temp = head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
newNode->prev = temp;
}
void insertBegin(int data) {
struct Node* newNode = createNode(data);
if (head == NULL) {
head = newNode;
return;
}
newNode->next = head;
head->prev = newNode;
head = newNode;
}
void deleteNode(int value) {
struct Node* temp = head;
while (temp != NULL && temp->data != value) {
temp = temp->next;
}
if (temp == NULL) {
printf("Value %d not found!\n", value);
return;
}
if (temp->prev != NULL) {
temp->prev->next = temp->next;
} else {
head = temp->next;
}
if (temp->next != NULL) {
temp->next->prev = temp->prev;
}
free(temp);
printf("Node with value %d deleted.\n", value);
}
void traverseForward() {
struct Node* temp = head;
if (temp == NULL) {
printf("List is empty!\n");
return;
}
printf("Doubly Linked List (forward): ");
while (temp != NULL) {
printf("%d <-> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
void traverseBackward() {
struct Node* temp = head;
if (temp == NULL) {
printf("List is empty!\n");
return;
}
while (temp->next != NULL)
temp = temp->next;
printf("Doubly Linked List (backward): ");
while (temp != NULL) {
printf("%d <-> ", temp->data);
temp = temp->prev;
}
printf("NULL\n");
}
int main() {
int choice, value;
while (1) {
printf("\n--- Doubly Linked List Menu ---\n");
printf("1. Insert at Beginning\n");
printf("2. Insert at End\n");
printf("3. Delete by Value\n");
printf("4. Traverse Forward\n");
printf("5. Traverse Backward\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value: ");
scanf("%d", &value);
insertBegin(value);
break;
case 2:
printf("Enter value: ");
scanf("%d", &value);
insertEnd(value);
break;
case 3:
printf("Enter value to delete: ");
scanf("%d", &value);
deleteNode(value);
break;
case 4:
traverseForward();
break;
case 5:
traverseBackward();
break;
case 6:
exit(0);
default:
printf("Invalid choice!\n");
}
}
return 0;
}
