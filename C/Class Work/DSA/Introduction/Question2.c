#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first;
    int second;
    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    first=first+second;
    second=first-second;
    first=first-second;
    printf("first:%d second:%d",first,second);
    return 0;
}
