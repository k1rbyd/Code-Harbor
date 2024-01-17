#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int front = -1;
int rear = -1;
int queue[MAX_SIZE];

int is_empty() 
{
    return (front == -1);
}

int is_full() 
{
    return ((rear + 1) % MAX_SIZE == front);
}

void enqueue(int n) 
{
    if (is_full()) 
    {
        printf("Queue Overflow\n");
        return;
    }

    if (is_empty())
    front = 0;

    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = n;
}	 	  	 	  	  	 		 	  	   	 	

void dequeue() 
{
    if (is_empty()) 
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d has been dequeued\n", queue[front]);

    if (front == rear) 
    {
        front = -1;
        rear = -1;
    } 
    else 
    {
        front = (front + 1) % MAX_SIZE;
    }
}

void display() 
{
    if (is_empty()) 
    {
    printf("Empty Queue\n");
    return;
    }

    printf("Queue elements: ");
    int i = front;
    while (i != rear) 
    {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", queue[rear]);
}

int peek() 
{
    if (is_empty()) 
    {
        printf("Queue is empty\n");
        return -1;
    }	 	  	 	  	  	 		 	  	   	 	

    return queue[front];
}

int main() 
{
    int x = 1;
    while (x == 1) 
    {
        int choice, r;
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &r);
                enqueue(r);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Element at the front of the queue: %d\n", peek());
                break;
            case 5:
                x = 0;
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }	 	  	 	  	  	 		 	  	   	 	
        printf("\n");
    }
}