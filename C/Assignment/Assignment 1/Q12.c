#include <stdio.h>

#define SIZE 6

int main() {
    int arr[SIZE];
    int i, max, secondMax;

    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        max = arr[0];
        secondMax = arr[1];
    } else {
        max = arr[1];
        secondMax = arr[0];
    }

    for (i = 2; i < SIZE; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    int j = 0; 
    int x,y,z;
    while (j < 10) {
        x = secondMax % 10;
        z = secondMax / 10; 
        y = x + z; 
        if (y < 10) { 
            j = y;
            break; 
        } else {
            secondMax = y; 
        }
    }
    printf("%d\n", j); 
}
