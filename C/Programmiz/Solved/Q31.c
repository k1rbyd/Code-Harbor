#include <stdio.h>

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        int temp = i;
        int sum = 0;
        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
