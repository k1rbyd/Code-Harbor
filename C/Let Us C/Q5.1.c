#include <stdio.h>
int main()
{
    int i=0;
    while (i<10)
    {
        int hours;
        int sal;
        printf("Enter the number of hours worked for the %d worker:",i+1);
        scanf("%d",&hours);
        if (hours>40)
        {
            sal = (hours-40)*120;
            printf("Outpay:%d.\n",sal);
        }
        else
        printf("Outpay:0.\n");
        i++;
    }
}