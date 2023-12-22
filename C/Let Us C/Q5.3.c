#include <stdio.h>
int main()
{
    float num1;
    int num2;
    float ans=1;
    printf("Enter the numbers [base and power]:");
    scanf("%f%d",&num1,&num2);
    while (num2>0)
    {
        ans *= num1;
        num2-=1;
    }
    printf("The result is %.4f.",ans);
}