#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j, max_diff = INT_MIN;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] > a[i] && (a[j] - a[i]) > max_diff) {
                max_diff = a[j] - a[i];
            }
        }
    }
    if (max_diff == INT_MIN) {
        printf("No such pair of elements found.\n");
    } else {
        printf("The maximum difference is %d\n", max_diff);
    }
    return 0;
}
