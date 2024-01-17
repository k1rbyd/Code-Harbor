#include <stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];
int front=-1;
int rear=-1;

int body();
int enqueue(int);
int dequeue();
int display();
int is_empty();
int is_full();

int main()
{
    int k;
    for(k=9;k>=0;k--)
    {
        enqueue(k);
        display();
    }
    for (k=0;k<4;k++)
    {
        dequeue();
        display();
        
    }
}

int enqueue(int a)
{
    if (is_full()) {
        printf("Error: Queue is full\n");
    } else if (is_empty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear+1)%MAX_SIZE;
    }
    queue[rear] = a;
}

int dequeue()
{
    if (is_empty()) {
        printf("Error: Queue is empty\n");
        return -1;
    } else if (front == rear) {
        int temp = queue[front];
        front = -1;
        rear = -1;
        return temp;
    } else {
        int temp = queue[front];
        front = (front+1)%MAX_SIZE;
        return temp;
    }
}

int is_empty() {
    return (front == -1 && rear == -1);
}

int is_full() {
    return ((rear+1)%MAX_SIZE == front);
}

int display()
{	 	  	 	  	  	     		     	      	       	 	
    if (is_empty()) {
        printf("Queue is empty\n");
    }
    printf("Queue elements: ");
    for (int i = front; i != rear; i = (i+1)%MAX_SIZE) {
        printf("%d ", queue[i]);
    }
    printf("%d", queue[rear]);
    printf("\n");
}

// #include <stdio.h>
// #define MAX_SIZE 10

// int front = -1, rear = -1;
// int queue[MAX_SIZE];

// int is_empty() {
//     return (front == -1 && rear == -1);
// }

// int is_full() {
//     return ((rear+1)%MAX_SIZE == front);
// }

// void enqueue(int x) {
//     if (is_full()) {
//         printf("Error: Queue is full\n");
//         return;
//     } else if (is_empty()) {
//         front = 0;
//         rear = 0;
//     } else {
//         rear = (rear+1)%MAX_SIZE;
//     }
//     queue[rear] = x;
// }

// int dequeue() {
//     if (is_empty()) {
//         printf("Error: Queue is empty\n");
//         return -1;
//     } else if (front == rear) {
//         int temp = queue[front];
//         front = -1;
//         rear = -1;
//         return temp;
//     } else {
//         int temp = queue[front];
//         front = (front+1)%MAX_SIZE;
//         return temp;
//     }
// }

// void display() {
//     if (is_empty()) {
//         printf("Queue is empty\n");
//         return;
//     }
//     printf("Queue elements: ");
//     for (int i = front; i != rear; i = (i+1)%MAX_SIZE) {
//         printf("%d ", queue[i]);
//     }
//     printf("%d", queue[rear]);
// }

// int main() {
//     int k, x;
//     printf("Circular Queue Program\n");

//     for (k = 9; k >= 0; k--) {
//         enqueue(k);
//     }
//     display();
    
//     for (k = 0; k < 4; k++) {
//         x = dequeue();
//         if (x != -1) {
//             printf("Dequeued element: %d\n", x);
//         }
//         x = dequeue();
//         if (x != -1) {
//             printf("Dequeued element: %d\n", x);
//             enqueue(x);
//         }
//         display();
//         printf("\n");
//     }
    
// }
