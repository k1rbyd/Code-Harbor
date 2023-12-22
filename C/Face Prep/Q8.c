#include <stdio.h>

int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}

int main()
{
    int n;
    int r;

    scanf("%d",&n);
    scanf("%d",&r);

    int a,b;
    a=fact(n);
    b=fact(n-r);

    int result;
    result = a/b;
    printf("%d",result);
}