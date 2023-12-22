#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reorder(int n, char *x[]) {
    int i, j;
    char temp[50];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(x[j], x[j+1]) > 0) {
                strcpy(temp, x[j]);
                strcpy(x[j], x[j+1]);
                strcpy(x[j+1], temp);
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%s\n", x[i]);
    }
}

int is_number(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int main() {
    int size = 10;
    char **countryNames = (char**) malloc(size * sizeof(char*));
    char country[50];

    int numCountries = 0;
    printf("Enter country names (type END to stop):\n");
    do {
        if (numCountries >= size) {
            size += 10;
            countryNames = (char**) realloc(countryNames, size * sizeof(char*));
        }

        scanf("%s", country);

        if (strcmp(country, "END") != 0 && !is_number(country)) {
            countryNames[numCountries] = (char*) malloc(strlen(country) + 1);
            strcpy(countryNames[numCountries], country);
            numCountries++;
        } else if (is_number(country)) {
            printf("Invalid ");
        }
    } while (strcmp(country, "END") != 0);

    reorder(numCountries, countryNames);

    for (int i = 0; i < numCountries; i++) {
        free(countryNames[i]);
    }
    free(countryNames);
}
