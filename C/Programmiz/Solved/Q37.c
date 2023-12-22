#include <stdio.h>

int nm(int);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int result;
    result=nm(number);
    printf("The sum of natural numbers up to %d is %d\n", number, result);
    return 0;
}

int nm(int x)
{
    if (x<=1)
    {
        return 1;
    }
    else
    {
        return x + nm(x-1);
    }
}
