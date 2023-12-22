#include <stdio.h>

int main()
{
    int n1 [3][3];
    int n2 [3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the %d element of %d row for n1:",j+1,i+1);
            scanf("%d",&n1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the %d element of %d row for n2:",j+1,i+1);
            scanf("%d",&n2[i][j]);
        }
    }
    int add [3][3];
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add[i][j]= n1[i][j]*n2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
}