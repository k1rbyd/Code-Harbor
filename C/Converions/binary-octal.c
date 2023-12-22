#include <stdio.h>

int binaryToOctal(int binary)
{
    int octal = 0;
    int base = 1;
    while (binary != 0)
    {
        int lastDigit = binary % 10;
        octal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return octal;
}

int main()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    int octal = binaryToOctal(binary);
    printf("Octal equivalent: %d\n", octal);
}
