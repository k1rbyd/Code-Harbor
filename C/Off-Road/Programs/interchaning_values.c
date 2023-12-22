#include <stdio.h>
int main()
{
float a;
float b;
printf("Enter the first elements value:");
scanf("%f",&a);
printf("Enter the second elements value:");
scanf("%f",&b);
a=a+b;
b=a-b;
a=a-b;
printf("The values of a and b are now : %.0f and %.0f",a,b);
}