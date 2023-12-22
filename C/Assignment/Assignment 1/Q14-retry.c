#include <stdio.h>
int main()
{
    int n,a,b,c,d,num1,num2,sum;
    
    scanf("%d",&n);
    
    if (n<1000 || n>9999)
    {
        printf("invalid input\n");
        return 0;
    }
    
    a = n/1000;
    b = (n/100)%10;
    c = (n/10)%10;
    d = n%10;
    
    if (a<b && a<c &&a<d)
    {
        num1 = a*10+b;
        if (c<d)
        {
            num2 = c*10+d;
        }
        else
        {
            num2 = d*10+c;
        }
    }
    else if (b<a && b<c && b<d)
    {
        num1 = b*10+a;
        if (c<d)
        {
            num2 = c*10+d;
        }
        else
        {
            num2 = d*10+c;
        }
    }
    else if (c<a && c<b && c<d)
    {
        num1 = c*10+a;
        if (b<d)
        {
            num2 = b*10+d;
        }
        else
        {
            num2 = d*10+b;
        }
    }
    else
    {
        num1 = d*10+a;
        if (b<c)
        {
            num2 = b*10+c;
        }
        else
        {
            num2 = c*10+b;
        }
    }
    sum = num1+num2;
    printf("%d",sum);
}