#include <stdio.h>
int main()
{
int i;
printf("Enter the number: ");
scanf("%d",&i);
if (i%10 != 0)
{
    printf("Its a double digit number.");
}
else
printf("Its a single digit number.");
}