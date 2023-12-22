#include <stdio.h>
int add(int);
int main()
{
    int num;
    scanf("%d",&num);
    add(num);
}

int add(int a)
{
    if (a<10 && a>0)
    {
        printf("%d",a);
    }
    else if (a<0)
    {
        a = a * (-1);
        printf("-");
        add(a);
    }
    else
    {
        int sum=0;                      
        int c;
        int d;
        c=a%10;
        d = (a-c)/10;
        sum = c+d;
        a = sum;
        add(a);
    }
}
