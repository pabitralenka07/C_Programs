// Write a C program using functions to perform the following operations on a Binary Tree: (i) Creation ;(ii) Insertion; (iii) Deletion

#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *left, *right;
};
struct Node* createNode(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->left = newNode->right = NULL;
return newNode;
}
struct Node* insert(struct Node* root, int value) {
if (root == NULL) {
return createNode(value);
}
if (value < root->data)
root->left = insert(root->left, value);
else if (value > root->data)
root->right = insert(root->right, value);
return root;
}
struct Node* findMin(struct Node* root) {
while (root->left != NULL)
root = root->left;
return root;
}
struct Node* deleteNode(struct Node* root, int value) {
if (root == NULL) return root;
if (value < root->data)
root->left = deleteNode(root->left, value);
else if (value > root->data)
root->right = deleteNode(root->right, value);
else {
if (root->left == NULL) {
struct Node* temp = root->right;
free(root);
return temp;
}
else if (root->right == NULL) {
struct Node* temp = root->left;
free(root);
return temp;
}
struct Node* temp = findMin(root->right);
root->data = temp->data;
root->right = deleteNode(root->right, temp->data);
}
return root;
}
void inorder(struct Node* root) {
if (root != NULL) {
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
}
int main() {
struct Node* root = NULL;
int choice, value;
while (1) {
printf("\n\n---- Binary Tree Operations ----\n");
printf("1. Insert Node\n");
printf("2. Delete Node\n");
printf("3. Display (Inorder Traversal)\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter value to insert: ");
scanf("%d", &value);
root = insert(root, value);
printf("Node inserted.\n");
break;
case 2:
printf("Enter value to delete: ");
scanf("%d", &value);
root = deleteNode(root, value);
printf("Node deleted (if found).\n");
break;
case 3:
printf("Inorder Traversal: ");
inorder(root);
printf("\n");
break;
case 4:
exit(0);
default:
printf("Invalid choice! Try again.\n");
}
}
return 0;
}
