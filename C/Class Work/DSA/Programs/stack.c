#include <stdio.h>

#define max 1000

int stack[max];
int top = -1;

int stackk();
void push();
void pop();
void display();

int main()
{
    printf("Welcome to Stack Editing\n");
    stackk();
}

int stackk()
{
    int choice;
    printf("Enter 1 to Push\nEnter 2 to Pop\nEnter 3 to Display\nEnter 4 to Quit\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice==1)
    {
        push();
        stackk();
    }
    else if (choice==2)
    {
        pop();
        stackk();
    }
    else if (choice==3)
    {
        display();
        stackk();
    }	 	  	 	  	  	     		     	      	       	 	
    else if (choice==4)
    {
        printf("Task has ended.\n");
    }
    else
    {  
        printf("Invalid choice. Please try again.\n");
    }
}

void push()
{
    if (top == max - 1) {
        printf("Overflow.\n");
        return;
    }
    int n;
    printf("Enter the number you want to push: ");
    scanf("%d", &n);
    top++;
    stack[top] = n;
    printf("Operation Done.\n");
}

void pop()
{
    if (top == -1) {
        printf("Underflow.\n");
        return;
    }
    int n = stack[top];
    top--;
    printf("Operation Done.\n");
}

void display()
{	 	  	 	  	  	     		     	      	       	 	
    if (top == -1) {
        printf("Empty stack.\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
