#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
void printArray(int arr[], int size);

int main() {
    int n1, n2;
    printf("Enter the number of elements for First Tank : ");
    scanf("%d", &n1);
    int tank1[n1];
    printf("Enter the items for First Tank: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tank1[i]);
    }

    while (1) {
        printf("Enter the number of elements for Second Tank : ");
        scanf("%d", &n2);
        if (n2 < 0) {
            printf("Invalid input, enter details again\n");
            continue;
        }
        break;
    }
    int tank2[n2];
    printf("Enter the items for Second Tank : ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tank2[i]);
    }

    int n3 = n1 + n2;
    int tank3[n3];
    int j = 0;
    for (int i = 0; i < n1; i++) {
        tank3[j] = tank1[i];
        j++;
    }
    for (int i = n2 - 1; i >= 0; i--) {
        tank3[j] = tank2[i];
        j++;
    }

    printf("Elements After Merging ");
    printArray(tank3, n3);
    
    mergeSort(tank3, 0, n3 - 1);
    
    printf("The sorted elements are ");
    printArray(tank3, n3);

    return 0;
}

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
