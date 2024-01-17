#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int *left, int l_size, int *right, int r_size) {
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < l_size && j < r_size) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < l_size) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < r_size) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(int *arr, int num) {
    if (num < 2)
        return;
    int mid = num / 2;
    int *left = malloc(mid * sizeof(int));
    int *right = malloc((num - mid) * sizeof(int));

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < num; i++) {
        right[i - mid] = arr[i];
    }
    mergesort(left, mid);
    mergesort(right, num - mid);
    merge(arr, left, mid, right, num - mid);
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    mergesort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
