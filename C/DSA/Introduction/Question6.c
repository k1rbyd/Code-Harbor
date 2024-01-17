#include <stdio.h>
int main()
{
int i,sum=0;
printf("Enter the range:");
scanf("%d",&i);
while (i>0)
{
sum+=i;
i--;
}
printf("The sum is %d.",sum);
}