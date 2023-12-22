#include <stdio.h>

int isPrime(int num);

int main()
{
    int start, end, i, flag;
    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for(i = start; i <= end; i++)
    {
        flag = isPrime(i);

        if(flag == 1)
            printf("%d ", i);
    }
}

int isPrime(int num)
{
    int j;
    if (num <= 1)
        return 0;
    for (j = 2; j <= num/2; j++)
    {
        if (num % j == 0)
            return 0;
    }
    return 1;
}
