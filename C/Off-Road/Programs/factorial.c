#include <stdio.h>
int main()
{
int n;
int fact=1;
printf("Enter the number:");
scanf("%d",&n);
while(n>1)
{
    fact = fact*n;
    n=n-1;
}
printf("The Factorial of the given number is: %d",fact);
}