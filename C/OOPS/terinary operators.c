#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    d=c<(a<b?a:b)?c:((a<b)?a:b);

    printf("%d is the smallest number.",d);
}

//OR

int mains()
{
    int a,b,c,d,e;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d = (a<b)?a:b;
    e = (d<c)?d:c;
    printf("The largest number is %d.",e);
}