#include <stdio.h>
int main()
{
int i, fact=1;
printf("Enter the number: ");
scanf("%d",&i);
while (i>1)
{
    fact = fact * i;
    i--;
}
printf("The factorial is %d.",fact);
}