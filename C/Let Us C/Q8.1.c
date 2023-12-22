#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main()
{
    int num;
    int ans;
    printf("Enter the number:");
    scanf("%d",&num);
    ans=fact(num);
    printf("Factorial:%d",ans);
}

int fact(int a)
{
    if (a==0)
    return 1;
    else
    return a*fact(a-1);
}