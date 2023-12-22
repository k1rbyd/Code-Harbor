#include <stdio.h>
#include <stdlib.h>

double pow(double,double);

int main()
{
    double num,powe;                                            // change all double to int. it will work.
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&powe);
    double ans;
    ans = pow(num,powe);
    printf("Answer : %d.\n",ans);
}

double pow(double a, double b)
{
    double ans=1;
    for (int i=1;i<=b;i++)
    {
        ans*=a; 
    }
    return ans;
}