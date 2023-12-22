#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    printf("%d is the greatest",a);
    if (a<b && b>c)
    printf("%d is the greatest",b);
    if (a<c && b<c)
    printf("%d is the greatest",c);
    else
    printf("Invalid inputs");
}