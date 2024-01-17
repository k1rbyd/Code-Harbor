#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left[], int left_size, int right[], int right_size)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < left_size && j < right_size) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < left_size) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < right_size) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int n) 
{
    if (n < 2) {
        return;
    }
    int mid = n / 2;
    int *left = malloc(mid * sizeof(int));
    int *right = malloc((n - mid) * sizeof(int));
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }
    mergesort(left, mid);
    mergesort(right, n - mid);
    merge(arr, left, mid, right, n - mid);
    free(left);
    free(right);
}

int main() 
{
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    mergesort(arr, n);
    printf("Result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}
