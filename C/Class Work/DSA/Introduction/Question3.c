#include <stdio.h>
int main()
{
int x;
printf("Enter the number: ");
scanf("%d",&x);
if (x<10)
printf("%d",x);
else if (x<100)
printf("%d%d",x%10,x/10);
}