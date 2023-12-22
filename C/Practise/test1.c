#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node** top, int data) {
    struct Node* newNodePtr = newNode(data); // Change variable name to avoid conflict with the function name
    newNodePtr->next = *top;
    *top = newNodePtr;
    printf("%d pushed onto the stack.\n", data);
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        exit(1);
    }
    struct Node* temp = *top;
    int data = temp->data;
    *top = temp->next;
    free(temp);
    return data;
}

int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty. Cannot peek.\n");
        exit(1);
    }
    return top->data;
}

int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    printf("Top element of the stack: %d\n", peek(top));

    printf("Popping element from the stack: %d\n", pop(&top));
    printf("Popping element from the stack: %d\n", pop(&top));

    printf("Top element of the stack: %d\n", peek(top));

    return 0;
}
