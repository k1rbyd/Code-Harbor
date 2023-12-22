#include <stdio.h>
int main()
{
    int num;
    float pos=0;
    float neg=0;
    int count1=0;
    int count2=0;
    printf("Enter -1 to exit...");
    printf("Enter the number:");
    scanf("%d",&num);
    while(num != (-1))
    {
        if (num>0)
        {
        pos+=num;
        count1+=1;
        }
        else if (num<0)
        {
        neg+=num;
        count2+=1;
        }
        printf("Enter the number: ");
        scanf("%d", &num);        
    }
    printf("The average of negative numbers is: %.2f.\n",(neg/count2));
    printf("The average of postive numbers is: %.2f.",(pos/count1));
}