#include <stdio.h>

void prime(int,int);

int main()
{
    int start,end;
    printf("Enter the starting value:");
    scanf("%d",&start);
    printf("Enter the ending value:");
    scanf("%d",&end);
    prime(start,end);
}

void prime(int a, int b)
{
    int i;
    int j;
    for(i=a;i<=b;i++)
    {
        if (i == 2) {
            printf("%d ", i);
            continue;
        }
        if (i % 2 == 0) {
            continue;
        }
        for(j=3;j<i;j+=2){
            if (i%j==0){
                printf("%d ",j);
                break;
            }
        }
        if (j == i) {
            printf("%d ", i);
        }
    }
}