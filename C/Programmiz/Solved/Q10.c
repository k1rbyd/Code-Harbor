#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if (i<0)
    printf("Enter a positive integer next time");
    if (i%2==0 && i>0)
    printf("Its even");
    if (i%2!=0 && i>0)
    printf("Its odd");
}