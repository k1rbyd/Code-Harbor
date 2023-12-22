#include <stdio.h>

int fact(int);

int main()
{
    int number,factu;
    scanf("%d",&number);
    factu = fact(number);
    printf("Factorial:%d",factu);
}

int fact(int x)
{
    if (x==0)
    {
    return 1;
    }
    else
    {
    return x*fact(x-1);
    }
}