#include <stdio.h>
int main()
{
    char grade;
    int salary;
    int bonus;
    printf("Enter the grade:");
    scanf("%c",&grade);
    printf("Enter the salary:");
    scanf("%d",&salary);
    if (grade=='A' && salary>10000)
    {
        bonus = (0.05*salary);
        salary+=bonus;
    }
    else if (grade=='B' && salary>10000)
    {
        bonus = (0.1*salary);
        salary+=bonus;
    }
    else if (salary<10000)
    {
        bonus =  (0.02*salary);
        salary+=bonus;
    }
    else
    bonus = 0;

    if(bonus==0)
    printf("No such category");
    else
    {
        printf("%d\n",bonus);
        printf("%d",salary);
    }
}