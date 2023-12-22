#include <stdio.h>
int main()
{
int rows;
int columns;
printf("Enter the number of rows:");
scanf("%d",&rows);
printf("Enter the number of columns:");
scanf("%d",&columns);

int scores[rows][columns],i,j;
for (i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&scores[i][j]);
    }
}

for(i=0;i<rows;i++)
{
    for(j=0;j<columns;j++)
    {
        printf("%d\t",scores[i][j]);
    }
    printf("\n");
}
}