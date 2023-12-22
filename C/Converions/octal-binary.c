#include <stdio.h>

void octalToBinary(int octal)
{
    int binary = 0;
    int base = 1;

    while (octal != 0)
    {
        int digit = octal % 10;

        if (digit < 0 || digit > 7)
        {
            printf("Invalid octal digit encountered!");
            return;
        }

        binary += digit * base;
        base *= 8;
        octal /= 10;
    }

    printf("Binary equivalent: %d\n", binary);
}

int main()
{
    int octal;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    octalToBinary(octal);
}
