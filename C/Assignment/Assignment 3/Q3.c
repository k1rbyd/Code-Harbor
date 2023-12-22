#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Library
{
    int accession_number;
    char book_name[100];
    char author_name[100];
    float book_price;
};

int num_books = 0;
struct Library library[100];

void add_book()
{
    if(num_books == 100)
    {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    printf("Enter book details:\n");
    printf("Accession Number: ");
    scanf("%d", &library[num_books].accession_number);
    printf("Book Name: ");
    scanf("%s", library[num_books].book_name);
    printf("Author Name: ");
    scanf("%s", library[num_books].author_name);
    printf("Book Price: ");
    scanf("%f", &library[num_books].book_price);
    num_books++;
    printf("Book added successfully.\n");
}

void display_book_info()
{
    if(num_books == 0)
    {
        printf("No books in library.\n");
        return;
    }
    printf("Enter Accession Number: ");
    int accession_number;
    scanf("%d", &accession_number);
    int i;
    for(i = 0; i < num_books; i++)
    {
        if(library[i].accession_number == accession_number)
        {
            printf("Book Name: %s\n", library[i].book_name);
            printf("Author Name: %s\n", library[i].author_name);
            printf("Book Price: %.2f\n", library[i].book_price);
            return;
        }
    }
    printf("Book with Accession Number %d not found.\n", accession_number);
}

void list_books_by_author()
{
    if(num_books == 0)
    {
        printf("No books in library.\n");
        return;
    }
    printf("Enter Author Name: ");
    char author_name[100];
    scanf("%s", author_name);
    int i, count = 0;
    for(i = 0; i < num_books; i++)
    {
        if(strcmp(library[i].author_name, author_name) == 0)
        {
            printf("%d. %s\n", library[i].accession_number, library[i].book_name);
            count++;
        }
    }
    if(count == 0)
    {
        printf("No books found by author %s.\n", author_name);
    }
}

void list_book_title()
{
    if(num_books == 0)
    {
        printf("No books in library.\n");
        return;
    }
    printf("Enter Book Name: ");
    char book_name[100];
    scanf("%s", book_name);
    int i, count = 0;
    for(i = 0; i < num_books; i++)
    {
        if(strcmp(library[i].book_name, book_name) == 0)
        {
            printf("Accession Number: %d\n", library[i].accession_number);
            count++;
        }
    }
    if(count == 0)
    {
        printf("Book with Name %s not found.\n", book_name);
    }
}

void list_books_by_accession_number()
{
    if(num_books == 0)
    {
        printf("No books in library.\n");
        return;
    }
    int i, j;
    struct Library temp;
    for(i = 0; i < num_books - 1; i++)
    {
        for(j = i + 1; j < num_books; j++)
        {
            if(library[i].accession_number > library[j].accession_number)
            {
                temp = library[i];
                library[i] = library[j];
                library[j] = temp;
            }
        }
    }
    printf("Books listed by Accession Number:\n");
    for(i = 0; i < num_books; i++)
    {
        printf("%d. %s by %s\n", library[i].accession_number, library[i].book_name, library[i].author_name);
    }
}

int main()
{
    printf("Welcome");
    while(1)
    {
        printf("\nEnter 1 to Add Book\nEnter 2 to Display Book Info\nEnter 3 to List all books written by the author\nEnter 4 to list the title of specified book\nEnter 5 to list the count of books in the library\nEnter 6 to list the books in order of the accession number\nEnter 7 to Exit\n");
        printf("Your Choice: ");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                add_book();
                break;
            case 2:
                display_book_info();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                list_book_title();
                break;
            case 5:
                printf("Total number of books in library: %d\n", num_books);
                break;
            case 6:
                list_books_by_accession_number();
                break;
            case 7:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid Choice. Please try again.\n");
        }
    }
}
