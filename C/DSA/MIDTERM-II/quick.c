#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d\n", arr[i]);
    } else {
      printf("%d, ", arr[i]);
    }
  }
}

void quicksort(int* arr, int left, int right) {
  if (left >= right) {
    return;
  }

  int pivot = arr[(left + right) / 2];
  int i = left;
  int j = right;

  printArray(arr, right + 1);

  while (i <= j) {
    while (arr[i] < pivot) {
      i++;
    }

    while (arr[j] > pivot) {
      j--;
    }

    if (i <= j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  }

  quicksort(arr, left, j);
  printArray(arr,j);
  quicksort(arr, i, right);
  printArray(arr,j);
}

int main() {
  int n;
  scanf("%d", &n);

  int* arr = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Input Array: ");
  printArray(arr, n);

  quicksort(arr, 0, n - 1);

  printf("Sorted Array: ");
  printArray(arr, n);

  free(arr);

}
