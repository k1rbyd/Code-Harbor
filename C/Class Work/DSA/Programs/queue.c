#include <stdio.h>
#define max 100

int body();
void enqueue(int);
void dequeue();
void display();

int queue[max],rear=-1;

int main()
{
    printf("Welcome to Queue Editing\n");
    body();
}

int body()
{
    printf("Enter 1 to Enqueue \nEnter 2 to Dequeue \nEnter 3 to Display \nEnter 4 to Exit.\n");
    printf("Your choice:");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        int value;
        printf("Enter the value:");
        scanf("%d",&value);
        enqueue(value);
        body();
        break;
    
    case 2:
        dequeue();
        body();
        break;
    
    case 3:
        display();
        body();
        break;
    
    case 4:
        printf("Exiting Program.");
        break;    
    default:
        printf("Invalid Input");
        body();
    }
}

void enqueue(int a)
{
    if (rear==max)
        printf("Overflow.\n");
    else
    {
    rear++;
    queue[rear]=a;
    }
}

void dequeue()
{
    if (rear==-1)
        printf("Underflow.\n");
    else
    {
        for(int j=0;j<=rear;j++)
        {
            queue[j]=queue[j+1];
        }
        rear--;
    }
}

void display()
{
    if (rear==-1)
    printf("Empty Queue.\n");
    else
    {
        for(int i=0;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}