#include <stdio.h>

int main()
{
    float class[10];
    for(int i=0;i<10;i++)
    {
        scanf("%f",&class[i]);
    }
    int result=0;
    for(int j=0;j<10;j++)
    {
        result += class[j];
    }
    int mean;
    mean = result/10;
    for (int k=0;k<10;k++)
    {
        printf("%f --> %f\n",class[k],class[k]-mean);
    }
}