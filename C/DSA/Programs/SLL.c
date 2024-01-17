#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void addatbeg(int num)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = num;
    n->next = head;
    head = n;
}

void addatend(int num)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = num;
    n->next = NULL;
    if (head == NULL) {
        head = n;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

int delatbeg()
{
    int temp = -1;
    if (head != NULL) {
        struct node *n = head;
        head = head->next;
        temp = n->data;
        free(n);
    }
    return temp;
}

int delatend()
{
    int temp = -1;
    if (head != NULL) {
        if (head->next == NULL) {
            temp = head->data;
            free(head);
            head = NULL;
        } else {
            struct node *n = head;
            while (n->next->next != NULL) {
                n = n->next;
            }
            temp = n->next->data;
            free(n->next);
            n->next = NULL;
        }
    }
    return temp;
}

void display()
{
    struct node *n = head;
    while (n->next!= NULL) {
        printf("%d, ", n->data);
        n = n->next;
    }
    if (n->next==NULL)
    {
        printf("%d",n->data);
    }
}

int main()
{
    int choice, x;
    int a = 1;
    while (a == 1) {
        // printf("1. Add at beginning\n");
        // printf("2. Add at end\n");
        // printf("3. Display\n");
        // printf("4. Delete at beginning\n");
        // printf("5. Delete at end\n");
        // printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to add: ");
                scanf("%d", &x);
                addatbeg(x);
                break;
            case 2:
                printf("Enter the value to add: ");
                scanf("%d", &x);
                addatend(x);
                break;        
            case 3:
                display();
                break;
            case 4:
                x = delatbeg();
                if (x == -1) {
                    printf("List is empty\n");
                } else {
                    printf("Deleted %d\n", x);
                }
                break;
            case 5:
                x = delatend();
                if (x == -1) {
                    printf("List is empty\n");
                } else {
                    printf("Deleted %d\n", x);
                }
                break;
            default:
                a = 0;
                break;
        }
    }
}
