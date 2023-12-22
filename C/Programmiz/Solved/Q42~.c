#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;
    while (binary > 0) {
        decimal += (binary % 10) * pow(2, i);
        i++;
        binary /= 10;
    }
    return decimal;
}

int decimalToOctal(int decimal) {
    int octal = 0, i = 1;
    while (decimal > 0) {
        octal += (decimal % 8) * i;
        i *= 10;
        decimal /= 8;
    }
    return octal;
}

int binaryToOctal(int binary) {
    int decimal = binaryToDecimal(binary);
    int octal = decimalToOctal(decimal);
    return octal;
}

int octalToBinary(int octal) {
    int decimal = 0, i = 0;
    while (octal > 0) {
        decimal += (octal % 10) * pow(8, i);
        i++;
        octal /= 10;
    }
    int binary = decimalToBinary(decimal);
    return binary;
}

int main() {
    int choice, number;
    printf("Enter your choice:\n1. Binary to Octal\n2. Octal to Binary\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &number);
            printf("Octal equivalent: %d\n", binaryToOctal(number));
            break;
        case 2:
            printf("Enter an octal number: ");
            scanf("%d", &number);
            printf("Binary equivalent: %d\n", octalToBinary(number));
            break;
        default:
            printf("Invalid choice!\n");
    }
}
