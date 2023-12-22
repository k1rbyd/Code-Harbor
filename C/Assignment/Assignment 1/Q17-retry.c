#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reorder(int n, char *x[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(x[j], x[j+1]) > 0) {
                char temp[50];
                strcpy(temp, x[j]);
                strcpy(x[j], x[j+1]);
                strcpy(x[j+1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", x[i]);
    }
}
int main() {
    char country[50];
    char *countries[50];
    int count = 0;
    while (1) {
        scanf("%s", country);
        if (strcmp(country, "END") == 0) {
            break;
        }
        countries[count] = malloc(strlen(country) + 1);
        strcpy(countries[count], country);
        count++;
    }
    reorder(count, countries);
    for (int i = 0; i < count; i++) {
        free(countries[i]);
    }
}
