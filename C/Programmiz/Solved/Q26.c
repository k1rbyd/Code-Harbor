#include <stdio.h>

int expo(int,int);

int main()
{
    int num,pow;
    scanf("%d %d",&num,&pow);
    expo(num,pow);
}

int expo(int a, int p)
{
    int result=1;
    for (int i=0;i<p;i++)
    {
        result*=a;
    }
    printf("result:%d",result);
}