#include <stdio.h>

int main()
{
    int n, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed integer: %d", reversed);
}