#include <stdio.h>

int main()
{
    int n;
    int factors;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
        {
        if(i%j==0)
        factors++;
        }
        if(factors==9-1)
        printf("%d ",i);
        factors=0;
    }
}