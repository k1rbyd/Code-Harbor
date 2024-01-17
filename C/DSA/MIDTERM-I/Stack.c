#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int n)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = n;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int r = stack[top];
        top--;
        printf("%d has been popped\n", r);
    }
}

void display()
{
    if (top == -1)
        printf("Empty Stack\n");
    else
    {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int r = 1;
    while (r == 1)
    {
        int choice, x;
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            r = 0;
            break;
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }

    return 0;
}
