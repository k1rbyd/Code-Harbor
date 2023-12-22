#include <stdio.h>
int main()
{
    int range;
    int num;
    int i;
    printf("Enter till what number you want the prime numbers:");
    scanf("%d",&range);
    printf("The prime numbers are:\n");
    for(i=1;i<range;i++)
    {
        for(num=1;num<=i;num++)
        {
            if(i%num==0)
            break;
            if(i==num)
            printf("%d\n",i);
        }
    }
}