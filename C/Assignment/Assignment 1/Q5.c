#include <stdio.h>
#define max 50
int main()
{
    char name1[max];
    char name2[max];
    int hour1;
    int hour2;
    int cost;
    printf("Enter the worker name:");
    scanf("%s",name1);
    printf("Enter the hours of work:");
    scanf("%d",&hour1);
    printf("Enter the worker name:");
    scanf("%s",name2);
    printf("Enter the hours of work:");
    scanf("%d",&hour2);
    if (hour1>=5 && hour1<=8)
    {
        cost = 500;
        if (hour1==6)
        cost = 550;
        else if (hour1==7)
        cost = 600;
        else if (hour1==8)
        cost = 650;
    }
    else
    {
        cost = 0;
    }
    printf("%s\n",name1);
    if (cost==0)
    printf("not applicable.\n");
    else
    printf("%d\n",cost);
    
    if (hour2>=5 && hour2<=8)
    {
        cost = 500;
        if (hour2==6)
        cost = 550;
        else if (hour2==7)
        cost = 600;
        else if (hour2==8)
        cost = 650;
    }
    else
    {
        cost = 0;
    }
    printf("%s\n",name2);
    if (cost==0)
    printf("not applicable.\n");
    else
    printf("%d\n",cost);
}
