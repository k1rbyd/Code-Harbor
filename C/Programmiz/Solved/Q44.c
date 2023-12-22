#include <stdio.h>

int powe(int,int);

int main()
{
    int number;
    int power;
    scanf("%d %d",&number,&power);
    int result;
    result=powe(number,power);
    printf("Result:%d",result);
}

int powe(int x, int y)
{
    if (y==0)
    return 1;
    else
    return x*powe(x,y-1);
}