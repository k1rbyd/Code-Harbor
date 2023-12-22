#include <stdio.h>
int main()
{
int num,fact;
int calc(int);
printf("Enter the number you want to find the factorial of: ");
scanf("%d",&num);
fact = calc(num);
printf("The factorial of the entered number : %d.",fact);
}

int calc(int a)
{
int c=1,count;
for(count=1;count<=a;count++)
{
    c*=count;
}
    return c;
}