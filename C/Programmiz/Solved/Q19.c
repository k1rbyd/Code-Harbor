#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    for(int k=1;k<=10;k++)
    {
        printf("%d*%d:%d\n",i,k,i*k);
    }
    
}