#include <stdio.h>
#include <string.h>

int main() {
    char test[100];
    fgets(test, sizeof(test), stdin);
    test[strcspn(test, "\n")] = '\0';    
    char x;
    char result[100] = "";
    scanf(" %c", &x);
    for (int i = 0, j = 0; i < strlen(test); i++) {
        if (x != test[i]) {
            result[j] = test[i];
            j++;
        }
    }
    printf("%s\n", result);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], c, *p;
    int i, j;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character from fgets
    
    printf("Enter a character to delete: ");
    scanf("%c", &c);
    
    // use two pointers to remove character from string
    for (i = 0, j = 0, p = str; i < strlen(str); i++) {
        if (str[i] != c) {
            *(p + j) = str[i];
            j++;
        }
    }
    *(p + j) = '\0'; // add null terminator to end of string
    
    printf("Corrected string: %s\n", str);

}
*/