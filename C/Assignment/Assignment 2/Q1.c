#include <stdio.h>

int main()
{
    int n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int flag0=0;
    int flag1=0;
    int flag2=0;
    int flag3=0;
    int flag4=0;
    int flag5=0;
    int flag6=0;
    int flag7=0;
    int flag8=0;
    int flag9=0;
    while (n>0)
    {
        i = n%10;
        n = n/10;
        if (i==0)
        {
            flag0++;
        }
        else if (i==1)
        {
            flag1++;
        }
        else if (i==2)
        {
            flag2++;
        }
        else if (i==3)
        {
            flag3++;
        }
        else if (i==4)
        {
            flag4++;
        }
        else if (i==5)
        {
            flag5++;
        }
        else if (i==6)
        {
            flag6++;
        }
        else if (i==7)
        {
            flag7++;
        }
        else if (i==8)
        {
            flag8++;
        }
        else if (i==9)
        {
            flag9++;
        }
    }
    printf("The Occurence of 0: %d\n",flag0);
    printf("The Occurence of 1: %d\n",flag1);
    printf("The Occurence of 2: %d\n",flag2);
    printf("The Occurence of 3: %d\n",flag3);
    printf("The Occurence of 4: %d\n",flag4);
    printf("The Occurence of 5: %d\n",flag5);
    printf("The Occurence of 6: %d\n",flag6);
    printf("The Occurence of 7: %d\n",flag7);
    printf("The Occurence of 8: %d\n",flag8);
    printf("The Occurence of 9: %d\n",flag9);

}