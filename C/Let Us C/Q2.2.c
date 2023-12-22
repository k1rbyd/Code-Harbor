#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter a 5-digit number:");
    scanf("%d",&a);
    b = a%10;
    printf("%d",b);
    a = a/10;
    c = a%10;
    printf("%d",c);
    a = a/10;
    d = a%10;
    printf("%d",d);
    a = a/10;
    e = a%10;
    printf("%d",e);
    a = a/10;
    f = a%10;
    printf("%d",f);
}