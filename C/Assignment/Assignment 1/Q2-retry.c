#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DIGITS 10

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void generate_permutations(char digits[], int start, int end)
{
    if (start == end)
    {
        printf("%s\n", digits);
        return;
    }
    bool used[MAX_DIGITS] = { false };
    for (int i = start; i <=end; i++)
    {
        if (!used[digits[i] - '0' ]){
            used[digits[i] - '0'] = true;
            swap(&digits[start], &digits[i]);
            generate_permutations(digits, start+1, end);
            swap(&digits[start], &digits[i]);
        }
    }
}

int main() {
    char input[MAX_DIGITS + 1];
    int length = 0;
    while (1) {
        printf("Enter a number with up to %d digits: ", MAX_DIGITS);
        fgets(input, MAX_DIGITS+1, stdin);
        length = strlen(input)-1;
        if (isdigit(input[0]) && length>0) {
            break;
        }
        printf("Invalid input\n");
    }
    bool has_duplicates = false;
    for (int i = 0; i<length; i++) {
        for (int j = i+1; j<length; j++) {
            if (input[i] == input[j]) {
                has_duplicates = true;
                break;
            }
        }
        if (has_duplicates) {
            break;
        }
    }
    if (has_duplicates) {
        printf("No possible combinations\n");
        return 0;
    }
    generate_permutations(input, 0, length-1);
    return 0;
}
