#include <stdio.h>

int main()
{
    int i1,sum=0;
    scanf("%d",&i1);
    for(int i=1;i<=i1;i++)
    {
        sum+=i;
    }
    printf("sum:%d",sum);
}