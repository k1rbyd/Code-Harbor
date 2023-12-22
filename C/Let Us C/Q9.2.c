#include <stdio.h>

void exponent(int *,int*,int *);
void factorial(int *,int*);

int main()
{
    int n1,exp,n2;
    printf("Enter the number and exponent:");
    scanf("%d%d",&n1,&exp);
    int r1;
    exponent(&n1,&exp,&r1);
    printf("Enter the number you want to find the factorial:");
    scanf("%d",&n2);
    int r2;
    factorial(&n2,&r2);

    printf("Value of Exponent:%d.\n",r1);
    printf("Value of Factorial:%d.",r2);
}

void exponent(int *a,int *b,int *c)
{
    int i=0;
    *c = 1;
    for(;i<=*b;i++)
    {
        *c = *a * *a;
    }
}

void factorial(int *d,int *e)
{
    int j=1;
    *e=1;
    for(;j<=*d;j++)
    {
        *e=*e * j;
    }
}