#include <stdio.h>

int sum(int);

int main()
{
    int n;
    int res;
    printf("Enter the number:");
    scanf("%d",&n);
    res=sum(n);
    printf("%d",res);
}

int sum(int a)
{
    if (a < 0) 
        a = -a;

    if (a < 10)
        return a; 

    int lastDigit = a % 10;
    int remainingDigits = a / 10; 

    return lastDigit + sum(remainingDigits);
}