#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number ya wanna check:");
    scanf("%d",&n);
    if (n%2==0)
        printf("Its an even number.");
    else
        printf("Its odd");
}