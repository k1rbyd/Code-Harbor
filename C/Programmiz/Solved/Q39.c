#include <stdio.h>

int gcd(int x, int y)
{
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}
