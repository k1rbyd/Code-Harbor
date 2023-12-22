#include <stdio.h>
#include <stdlib.h>

void countingsort(int *arr, int max, int n) {
    int *count = malloc((max + 1) * sizeof(int));
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int k = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[k] = i;
            k++;
            count[i]--;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int max;
    scanf("%d", &max);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    countingsort(arr, max, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
