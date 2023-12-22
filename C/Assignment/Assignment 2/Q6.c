#include <stdio.h>

int main()
{
    int num,space=0;
    printf("Enter the count:");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        for(int k=0;k<space;k++)
        {
            printf("  ");
        }

        for(int j=0;i>j;j++)
        {
            printf("* ");
        }

        space+=1;
        printf("\n");
    }
}