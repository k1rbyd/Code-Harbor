#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], sorted[MAX_SIZE];
    int size, i, j, k, dup;

    printf("Enter a sequence of integers separated by spaces: ");
    size = 0;
    while (scanf("%d", &arr[size]) == 1) {
        size++;
        if (size == MAX_SIZE) {
            break;
        }
    }

    for (i = 0; i < size; i++) {
        sorted[i] = arr[i];
    }
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    printf("Arranged sequence with unique elements:\n");
    for (i = 0; i < size; i++) {
        dup = 0;
        for (j = i + 1; j < size; j++) {
            if (sorted[i] == sorted[j]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            printf("%d ", sorted[i]);
        }
    }
    printf("\n");

    return 0;
}
