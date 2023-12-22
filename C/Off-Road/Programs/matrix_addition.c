#include <stdio.h>
int main()
{

int a[][3]={
    {1,2,3},
    {2,3,4},
    {1,3,5}
};

int b[][3]={
    {7,8,9},
    {5,6,7},
    {3,5,7}
};

int c[3][3],i,j;

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}   
}