#include <stdio.h>

#define MAX 1000

int arr[MAX];
int top = -1;

void array();
void insert();
void modify();
void delete();
void display();
void find_min();
void find_max();

int main()
{
    printf("Welcome to Array Editing\n");
    array();
    return 0;
}

void array()
{
    int choice;
    printf("Enter 1 to Insert\nEnter 2 to Insert Specifically\nEnter 3 to Delete\nEnter 4 to Display\nEnter 5 to find min\nEnter 6 to find max\nEnter 7 to Quit\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            insert();
            break;
        case 2:
            modify();
            break;        
        case 3:
            delete();
            break;
        case 4:
            display();
            break;
        case 5:
            find_min();
            break;
        case 6:
            find_max();
            break;
        case 7:
            printf("Task has ended.\n");
            return;
        default:
            printf("Invalid choice. Please try again.\n");
    }	 	  	 	  	  	     		     	      	       	 	
    array();
}

void insert()
{
    if (top == MAX - 1) {
        printf("Overflow.\n");
        return;
    }
    int n;
    printf("Enter the number you want to push: ");
    scanf("%d", &n);
    top++;
    arr[top] = n;
    printf("Operation Done.\n");
}


void modify()
{
    if (top == MAX - 1) {
        printf("Invalid.\n");
        return;
    }
    int pos;
    printf("Enter the position you want to insert at: ");
    scanf("%d",&pos);
    pos-=1;
    int n;
    printf("Enter the number you want to insert: ");
    scanf("%d", &n);
    top++;
    for (int i = top; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }	 	  	 	  	  	     		     	      	       	 	
    arr[pos] = n;
    printf("Operation Done.\n");
}

void delete()
{
    if (top == -1) {
        printf("Invalid.\n");
        return;
    }
    int pos;
    printf("Enter the position you want to delete: ");
    scanf("%d",&pos);
    for (int i = pos; i < top; i++)
    {
        arr[i] = arr[i+1];
    }
    top--;
    printf("Operation Done.\n");
}

void display()
{
    if (top == -1) {
        printf("Empty.\n");
        return;
    }
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void find_min()
{
    if (top == -1) {	 	  	 	  	  	     		     	      	       	 	
        printf("Empty.\n");
        return;
    }
    int minimum = arr[0];
    for (int i = 1; i <= top; i++) {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }
    printf("The minimum: %d.\n", minimum);
}

void find_max()
{
    if (top == -1) {
        printf("Empty.\n");
        return;
    }
    int maximum = arr[0];
    for (int i = 1; i <= top; i++) {
        if (maximum < arr[i])
        {
            maximum = arr[i];
        }
    }
    printf("The maximum: %d.\n", maximum);
}	 	  	 	  	  	     		     	      	       	 	
