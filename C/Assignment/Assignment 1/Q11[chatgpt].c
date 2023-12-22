#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void displayBinary(int num) {
    int binary[32];
    int index = 0;
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }
    printf("Binary Format: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

void displayHexadecimal(int num) {
    printf("Hexadecimal Format: ");
    int rem, i = 0;
    char hexa[100];
    while (num != 0) {
        rem = num % 16;
        if (rem < 10) {
            hexa[i] = rem + 48;
        } else {
            hexa[i] = rem + 55;
        }
        i++;
        num /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        displayBinary(num);
    } else {
        displayHexadecimal(num);
    }
    return 0;
}
