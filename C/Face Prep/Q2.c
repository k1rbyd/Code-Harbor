#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=0;
    int count = 0;
    while(n!=0)
    {
        m++;
        count += (n-1);
        n--;
    }
    printf("%d",count);
}