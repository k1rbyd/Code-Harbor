#include <stdio.h>

#define MAX_NAME_LENGTH 4000

struct Student {
    char name[MAX_NAME_LENGTH];
    int number;
};

int main() {
    struct Student firstStudent, secondStudent;

    printf("Enter the first student's Name: ");
    if (fgets(firstStudent.name, sizeof(firstStudent.name), stdin) == NULL) {
        printf("Error reading input\n");
        return 1;
    }
    getchar(); // consume the newline character

    printf("Enter the first student's Roll Number: ");
    if (scanf("%d", &firstStudent.number) != 1) {
        printf("Error reading input\n");
        return 1;
    }

    printf("Enter the second student's Name: ");
    if (fgets(secondStudent.name, sizeof(secondStudent.name), stdin) == NULL) {
        printf("Error reading input\n");
        return 1;
    }
    getchar(); // consume the newline character

    printf("Enter the second student's Roll Number: ");
    if (scanf("%d", &secondStudent.number) != 1) {
        printf("Error reading input\n");
        return 1;
    }

    printf("First student's Name: %s\n Roll Number: %d\n", firstStudent.name, firstStudent.number);
    printf("Second student's Name: %s\n Roll Number: %d\n", secondStudent.name, secondStudent.number);

    return 0;
}
