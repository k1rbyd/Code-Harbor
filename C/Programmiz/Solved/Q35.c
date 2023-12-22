#include <stdio.h>
#include <math.h>

int isPrime(int num);
int isArmstrong(int num);

int main()
{
    int num, primeFlag, armstrongFlag;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    primeFlag = isPrime(num);
    armstrongFlag = isArmstrong(num);

    if(primeFlag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    if(armstrongFlag == 1)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

int isPrime(int num)
{
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int isArmstrong(int num)
{
    int originalNum, remainder, n = 0, result = 0, power;
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        power = round(pow(remainder, n));
        result += power;

        originalNum /= 10;
    }
    if(result == num)
        return 1;
    else
        return 0;
}
