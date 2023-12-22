#include <stdio.h>
/* int main()
{
int a,c,count=1;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter the range:");
scanf("%d",&c);
while(count<=c)
{
    printf("%d x %d : %d\n",a,count,a*count);
    count++;
}
} */

int main()
{
int a,b,c;
printf("Enter the 2 numbers you want the tables for:");
scanf("%d%d",&a,&b);
for(a;a<=b;a++)
{
    for(c=1;c<=10;printf("%d x %d : %d\n",a,c,a*c),c++);
    printf("_______________\n\n");
}
} 
