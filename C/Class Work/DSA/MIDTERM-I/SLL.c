#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void addAtBeginning(int num)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = num;
    temp->next = head;
    head = temp;
}

void addAtEnd(int num)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = num;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    struct Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
}

int deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return -1;
    }

    struct Node *temp = head;
    int data = temp->data;
    head = head->next;
    free(temp);
    return data;
}

int deleteAtEnd()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return -1;
    }

    if (head->next == NULL)
    {
        int data = head->data;
        free(head);
        head = NULL;
        return data;
    }

    struct Node *curr = head;
    struct Node *prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    int data = curr->data;
    prev->next = NULL;
    free(curr);
    return data;
}

void reverse()
{
    struct Node *current=head;
    struct Node *prev=NULL;
    struct Node *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;
    }    
    head = prev;
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int x = 1;
    while (x == 1)
    {
        int choice, r;
        printf("1. Add at beginning\n");
        printf("2. Add at end\n");
        printf("3. Delete at beginning\n");
        printf("4. Delete at end\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &r);
            addAtBeginning(r);
            break;
        case 2:
            printf("Enter the value to insert: ");
            scanf("%d", &r);
            addAtEnd(r);
            break;
        case 3:
            r = deleteAtBeginning();
            if (r != -1)
                printf("Deleted value: %d\n", r);
            break;
        case 4:
            r = deleteAtEnd();
            if (r != -1)
                printf("Deleted value: %d\n", r);
            break;
        case 5:
        {
           reverse();
           break;
        }
        case 6:
        {
            display();
            break;
        }
        case 7:
        {
            x = 0;
            break;
        }
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }

    return 0;
}
