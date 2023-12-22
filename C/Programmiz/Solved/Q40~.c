#include <stdio.h>
#include <math.h>

int binToDec(long long bin);
long long decToBin(int dec);

int main()
{
    int option;
    long long bin;
    int dec;
    printf("Select an option:\n");
    printf("1. Binary to decimal conversion\n");
    printf("2. Decimal to binary conversion\n");
    scanf("%d", &option);
    switch(option)
    {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &bin);
            printf("Decimal equivalent: %d", binToDec(bin));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &dec);
            printf("Binary equivalent: %lld", decToBin(dec));
            break;
        default:
            printf("Invalid option selected.");
    }
}

int binToDec(long long bin)
{
    int dec = 0, i = 0, rem;
    while (bin != 0)
    {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

long long decToBin(int dec)
{
    long long bin = 0;
    int rem, i = 1;
    while (dec != 0)
    {
        rem = dec % 2;
        dec /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
