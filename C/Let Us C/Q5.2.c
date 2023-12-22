#include <stdio.h>
int main()
{
    int num;
    int ans=1;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num==0)
    printf("The factorial is 1.");
    else if (num<0)
    printf("Nopeeeyy Nope, not possible.");
    else
    {
    while (num>1)
    {
        ans= ans*num;
        num-=1;
    }
    printf("THe factorial is %d.",ans);
    }
}