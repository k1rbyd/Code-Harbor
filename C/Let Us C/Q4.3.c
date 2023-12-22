#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b+c && b<a+c && c<a+b)
    printf("The triangle exists.");
    else
    printf("No such triangle exists.");
}