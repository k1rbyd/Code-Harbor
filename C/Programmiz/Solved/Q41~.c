#include <stdio.h>
#include <math.h>

int octalToDecimal(int octal)
{
    int decimal = 0, i = 0;
    while (octal != 0) {
        int remainder = octal % 10;
        octal /= 10;
        decimal += remainder * pow(8, i);
        ++i;
    }
    return decimal;
}

int decimalToOctal(int decimal)
{
    int octal = 0, i = 1;
    while (decimal != 0) {
        int remainder = decimal % 8;
        decimal /= 8;
        octal += remainder * i;
        i *= 10;
    }
    return octal;
}

int main()
{
    int choice, number;
    printf("1. Octal to Decimal\n");
    printf("2. Decimal to Octal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter an octal number: ");
            scanf("%d", &number);
            printf("Decimal equivalent: %d\n", octalToDecimal(number));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            printf("Octal equivalent: %d\n", decimalToOctal(number));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
