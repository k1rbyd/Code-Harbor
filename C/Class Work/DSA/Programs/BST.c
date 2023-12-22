#include <stdio.h>
#include <stdlib.h>

struct BSTNode {
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};

struct BSTNode* createNode(int x) {
    struct BSTNode* newNode = (struct BSTNode*)malloc(sizeof(struct BSTNode));
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void add_node(struct BSTNode** root, int x) {
    if (*root == NULL) {
        *root = createNode(x);
        return;
    }

    struct BSTNode* current = *root;
    struct BSTNode* parent = NULL;

    while (current != NULL) {
        parent = current;
        if (x < current->data)
            current = current->left;
        else if (x > current->data)
            current = current->right;
        else {
            printf("DUPLICATE ELEMENT %d NOT INSERTED\n", x);
            return;
        }
    }

    if (x < parent->data)
        parent->left = createNode(x);
    else
        parent->right = createNode(x);
}

void inorder(struct BSTNode* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d, ", root->data);
        inorder(root->right);
    }
}

void preorder(struct BSTNode* root) {
    if (root != NULL) {
        printf("%d, ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct BSTNode* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d, ", root->data);
    }
}

int main() {
    struct BSTNode* root = NULL;
    int choice, x;

    do {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%d", &x);
                add_node(&root, x);
                break;
            case 2:
                inorder(root);
                printf("\n");
                break;
            case 3:
                preorder(root);
                printf("\n");
                break;
            case 4:
                postorder(root);
                printf("\n");
                break;
            case 5:
                break;
            default:
                break;
        }
    } while (choice != 5);

    return 0;
}
