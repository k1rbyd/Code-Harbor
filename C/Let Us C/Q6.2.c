#include <stdio.h>
int fact(int);
int main()
{
    int num;
    int i=0;
    int j;
    float sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(;i<=num;i++)
    {
        j = fact(i);
        sum+= (float)i/j;
    }
    printf("Result : %f",sum);
}
int fact(int a)
{
    if (a==0)
    return 1;
    else if (a>0)
    return a*fact(a-1);
}