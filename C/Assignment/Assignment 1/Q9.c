#include <stdio.h>
#include <string.h>

int body();
int add();
int searc();
int cou();
int displa();

int num[100];
char book[100][100];
char author[100][100];
int pages[100];
int count = 0;

int main() {
    body();
    return 0;
}

int body() {
    int choice;
    printf("        Menu\n 1.Add book details\n 2.Display book details\n 3.List all books of given author\n 4.List count of books in library\n 5.Exit\n");
    printf(" Your Choice:");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add();
            body();
            break;
        case 2:
            displa();
            body();
            break;
        case 3:
            searc();
            body();
            break;
        case 4:
            cou();
            body();
            break;
        case 5:
            printf("Program Exited.");
            break;
        default:
            printf("Invalid Input.\n");
            body();
    }
    return 0;
}

int add() {
    int no;
    printf("How many records:");
    scanf("%d", &no);

    for(int i = 0; i < no; i++) {
        printf("Enter Book Serial Number:");
        scanf("%d", &num[count]);
        printf("Enter Book Name:");
        scanf("%s", book[count]);
        printf("Enter Author Details:");
        scanf("%s", author[count]);
        printf("Enter pages count:");
        scanf("%d", &pages[count]);
        count++;
    }
    return count;
}

int searc() {
    char sd[100];
    printf("Enter Authors Name:");
    scanf("%s", sd);
    
    int found = 0;
    for(int k = 0; k < count; k++) {
        if (strcmp(author[k], sd) == 0) {
            printf("%s\n", book[k]);
            found = 1;
        }
    }
    if (!found) {
        printf("No match found.\n");
    }
    return 0;
}

int displa() {
    printf("Book Details:\n");
    for (int j = 0; j < count; j++) {
        printf("%d\n", num[j]);
        printf("%s\n", book[j]);
        printf("%s\n", author[j]);
        printf("%d\n", pages[j]);
    }
    return 0;
}

int cou() {
    printf("%d Books are present.", count);
    return 0;
}
