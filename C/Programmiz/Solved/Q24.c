#include <stdio.h>

int main()
{
    int i;
    int count=1;
    scanf("%d",&i);
    while(i>10)
    {
        i=i/10;
        count++;
    }
    printf("%d",count);
}