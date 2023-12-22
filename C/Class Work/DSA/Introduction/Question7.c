#include <stdio.h>
int main()
{
int i,flag;
printf("Enter the number:");
scanf("%d",&i);
int check=2;
flag =0;
for(;check<i;check++)
{
if(check%i==0)
{
printf("Its not a prime number");
flag+=1;
break;
}
}
if (flag==0)
{
printf("Its a prime number");
}
}