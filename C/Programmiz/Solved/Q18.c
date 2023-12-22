#include <stdio.h>

int main()
{
    int i,fact=1;
    scanf("%d",&i);
    if (i==0)
    printf("Factorial:0");
    else
    {
        for(;i>1;i--)
        {
            fact*=i;
        }
        printf("Factorial:%d",fact);
    }
}