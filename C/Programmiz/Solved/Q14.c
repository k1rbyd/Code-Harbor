#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    if (year>0 && year%4==0)
    printf("Its a leap year");
    else
    printf("Not a leap year");
}