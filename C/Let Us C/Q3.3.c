#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year<100 && year%4==0)
    printf("Its a leap year.");
    else if (year>100 && year%400==0 || year%4==0)
    printf("Its a leap year.");
    else
    printf("Its not a leap year");
}