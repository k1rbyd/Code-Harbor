#include <stdio.h>

int main() {
    int n, sum = 0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float) sum / n;
    printf("Average is: %.2f", avg);
}
