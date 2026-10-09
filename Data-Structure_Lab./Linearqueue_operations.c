// Write a program in c to implement linear queue data structure using array and perform the following operations. Enqueue,dequeue, peek and display.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
int isEmpty()
    {
        return (front == -1);
    }
int isFull()
    {
        return (rear == MAX - 1);
    }
void enqueue(int value)
    {
        if (isFull())
            {
                printf("Queue Overflow! Cannot insert %d\n", value);
                return;
            }
        if (front == -1)
            {
                front = 0;
                rear++;
                queue[rear] = value;
                printf("Inserted %d\n", value);
            }
    }
void dequeue()
    {
        if (isEmpty())
            {
                printf("Queue Underflow! Nothing to delete.\n");
                return;
            }
        printf("Deleted %d\n", queue[front]);
        if (front == rear)
            {
                front = rear = -1;
            } else
            {
                front++;
            }
    }
void peek() 
    {
        if (isEmpty()) 
        {
            printf("Queue is empty!\n");
        } else {
            printf("Front element is %d\n", queue[front]);
                }
    }
void display()
    {
        if (isEmpty())
        {
            printf("Queue is empty!\n");
            return;
        }
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) 
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
int main()
{
    int choice, value;
    while (1)
    {
        printf("\n--- Queue Operations ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
