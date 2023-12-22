#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input");
        return 0;
    } else if (n == 0) {
        printf("No earthquake predicted");
        return 0;
    }

    int low = 0, medium = 0, high = 0;
    for (int i = 0; i < n; i++) {
        double magnitude;
        scanf("%lf", &magnitude);
        if (magnitude <= 5.4) {
            low++;
        } else if (magnitude <= 7.0) {
            medium++;
        } else {
            high++;
        }
    }

    printf("%d ", low);
    printf("%d ", medium);
    printf("%d ", high);

    return 0;
}
