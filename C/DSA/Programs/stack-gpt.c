#include <stdio.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

void insert(int data) {
    if (top >= MAX_STACK_SIZE - 1) {
        printf("Stack overflow.\n");
        return;
    }
    top++;
    stack[top] = data;
    printf("%d has been inserted into the stack.\n", data);
}

void delete() {
    if (top < 0) {
        printf("Stack underflow.\n");
        return;
    }
    int data = stack[top];
    top--;
    printf("%d has been deleted from the stack.\n", data);
}

void modify(int index, int data) {
    if (index < 0 || index > top) {
        printf("Invalid index.\n");
        return;
    }
    stack[index] = data;
    printf("%d has been modified at index %d.\n", data, index);
}

void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Current stack:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main(){
    char r;
    int data;
    printf("Do you want to play with stack [y/n]: ");
    scanf(" %c", &r);
    while (r == 'y' || r == 'Y'){
        printf("Enter 1 to insert new data.\nEnter 2 to delete existing data.\nEnter 3 to modify existing data.\nEnter 4 to display data.\nEnter 5 to exit.\nYour Choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insert(data);
                break;
            case 2:
                delete();
                break;
            case 3:
                printf("Enter the index to modify: ");
                int index;
                scanf("%d", &index);
                printf("Enter the new data: ");
                scanf("%d", &data);
                modify(index, data);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    printf("Have a nice day ahead.\n");
    return 0;
}
