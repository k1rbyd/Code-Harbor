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

    if (x < (*root)->data)
        add_node(&(*root)->left, x);
    else if (x > (*root)->data)
        add_node(&(*root)->right, x);
    else
        printf("DUPLICATE ELEMENT %d NOT INSERTED\n", x);
}

void inorder(struct BSTNode* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct BSTNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct BSTNode* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

struct BSTNode* search(struct BSTNode* root, int x) {
    if (root == NULL || root->data == x)
        return root;

    if (x < root->data)
        return search(root->left, x);
    else
        return search(root->right, x);
}

int delete_BST(struct BSTNode** root, int x) {
    if (*root == NULL)
        return -9999;

    if (x < (*root)->data)
        return delete_BST(&(*root)->left, x);
    else if (x > (*root)->data)
        return delete_BST(&(*root)->right, x);
    else {
        int value = (*root)->data;
        if ((*root)->left == NULL && (*root)->right == NULL) {
            free(*root);
            *root = NULL;
        } else if ((*root)->left == NULL) {
            struct BSTNode* temp = *root;
            *root = (*root)->right;
            free(temp);
        } else if ((*root)->right == NULL) {
            struct BSTNode* temp = *root;
            *root = (*root)->left;
            free(temp);
        } else {
            struct BSTNode* temp = (*root)->right;
            while (temp->left != NULL)
                temp = temp->left;
            (*root)->data = temp->data;
            return delete_BST(&(*root)->right, temp->data);
        }
        return value;
    }
}

int main() {
    struct BSTNode* root = NULL;
    int choice, x;

    do {
        printf("\nMenu:\n");
        printf("1 - Insert element x into BST\n");
        printf("2 - Print inorder traversal of BST\n");
        printf("3 - Print preorder traversal of BST\n");
        printf("4 - Print postorder traversal of BST\n");
        printf("5 - Search an element x from BST\n");
        printf("6 - Delete an element x from BST\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &x);
                add_node(&root, x);
                break;
            case 2:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("Enter the element to be searched: ");
                scanf("%d", &x);
                struct BSTNode* result = search(root, x);
                if (result != NULL)
                    printf("Element %d found in BST.\n", x);
                else
                    printf("Element %d not found in BST.\n", x);
                break;
            case 6:
                printf("Enter the element to be deleted: ");
                scanf("%d", &x);
                int deletedValue = delete_BST(&root, x);
                if (deletedValue != -9999)
                    printf("Deleted element: %d\n", deletedValue);
                else
                    printf("Element %d not found in BST.\n", x);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}
