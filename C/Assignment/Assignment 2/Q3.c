#include <stdio.h>

void sort(int arr[], int n) {
    int rank[n];
    for (int i = 0; i < n; i++) {
        rank[i] = 1;
        for (int j = 0; j < n; j++) {
            if (arr[j] < arr[i]) { 
                rank[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = rank[i];
    }
}

int main() {
    int arr[10000];
    int n;
    n = 6;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
