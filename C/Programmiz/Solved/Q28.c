#include <stdio.h>

int main()
{
    int number;
    int flag=0;
    scanf("%d",&number);
    if (number==1 || number==2)
    flag=0;
    if (number<=0)
    flag++;
    if (number>2)
    {
    for (int i=2;i<number;i++)
    {
        if (number%i==0)
        {
            flag++;
            break;
        }
    }
    }
    if (flag==0)
    printf("Its a prime number");
    else
    printf("Its not a prime number");
}