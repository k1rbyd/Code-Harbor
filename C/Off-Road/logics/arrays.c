#include <stdio.h>
int main()
{
//int ssn[8];                                   declaring an array
//int x[]={1,2,3,5,3,6,5,45,6,4,5};             initialising an array

//making an array and getting user input

int n;
float temperature[1000];
printf("Enter the number of temperatures you are gonna input:");
scanf("%d",&n);
int x=0;
while(x<n-1)
{
    printf("Enter the temperature of the day %d:",x+1);
    scanf("%f",&temperature[x]);
    ++x;
}

//reading the values from a array

x=0;
while(x<n-1)
{
    printf("The temperature of the %d day is %.2f.\n",x+1,temperature[x]);
    ++x;
}
}