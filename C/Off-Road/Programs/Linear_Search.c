#include <stdio.h>
int main()
{
int n;
printf("Enter the limit of the array:");
scanf("%d",&n);
int count;
float list[n];
for(count=0;count<n;count++)
{
printf("Enter the %d element:",count+1);
scanf("%f",&list[count]);
}

float search;
printf("Enter the element you want to search:");
scanf("%f",&search);
int loc=0;
for(count=0;count<n;count++)
{
if(search==list[count])
{
loc+=1;
}
}
if(loc==1)
{printf("The searched element exists.");
for(count=0;count<n;count++)
{
if(search==list[count])
{
printf("\nThe searched element is present in the postion %d",count+1);
}
}
}
else
{
    printf("No such element exists in the array");
}
}