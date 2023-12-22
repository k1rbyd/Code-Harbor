#include <stdio.h>
#include <stdlib.h>

void countsort(int*,int,int);

int main()
{
    int max, n, i;
    scanf("%d", &n);
    scanf("%d", &max);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countsort(arr, max, n);
    printf("Result: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void countsort(int arr[], int max, int n) {
    int count[max+1];
    int output[n];
    int i;
    for (i = 0; i <= max; i++) {
        count[i] = 0;
    }
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (i = 1; i <= max; i++) {
        count[i] += count[i-1];
    }
    for (i = n-1; i >= 0; i--) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
