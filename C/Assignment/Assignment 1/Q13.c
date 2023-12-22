#include <stdio.h>
int main()
{
    int num;
    int check=0;
    printf("Enter the number ya wanna check:");
    scanf("%d",&num);
    if (num>0)
    {
        int x,y;
        int temp;
        int a;
        a = num*num;
        while(check<10)
        {
            x=a%10;
            y =a/10;
            temp=x+y;
            if (temp<10)
            {
                check=temp;
                break;
            }
        }
        if (num<10)
        {
            int x1,y1,temp1,temp2;
            temp2=0;
            while(temp2<10)
            {
                x1=num%10;
                y1=num/10;
                temp1=x1+y1;
                if (temp1<10)
                {
                    temp2=temp1;
                    break;
                }
            }
            num=temp2;
        }
        if (check==num)
        printf("YES");
        else
        printf("NO");
    }
    else
    printf("Invalid.");
}