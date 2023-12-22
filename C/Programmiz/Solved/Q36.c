#include <stdio.h>

int isPrime(int);

int main()
{
    int number;
    int flag1, flag2;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number <= 2) {
        printf("Invalid input. Number must be greater than 2.\n");
        return 0;
    }
    for(int i=2, j=number-2; i<=j; i++, j--)
    {
        if (i % 2 == 0 && i != 2) {
            continue;
        }
        flag1 = isPrime(i);
        flag2 = isPrime(j);
        if (flag1 && flag2)
        {
            printf("%d + %d = %d\n", i, j, number);
        }
    }
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
