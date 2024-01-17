#include <stdio.h>
#include <stdlib.h>

void quicksort(int* arr, int left, int right);

int main()
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
    {
        if(i==n-1)
        scanf("%d", &arr[i]);
        else
        scanf("%d,",&arr[i]);
    }
    quicksort(arr, 0, n-1);
    printf("Result: ");
    for(int i = 0; i < n; i++)
    {
        if (i==n-1)
        printf("%d", arr[i]);
        else
        printf("%d, ",arr[i]);
    }
    free(arr);
}


void quicksort(int* arr, int left, int right)
{
    if(left >= right)
        return;
    int pivot = arr[(left + right) / 2];
    int i = left;
    int j = right;
    while(i <= j)
    {
        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;

        if(i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    quicksort(arr, left, j);
    quicksort(arr, i, right);
}
