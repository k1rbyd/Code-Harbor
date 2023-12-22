#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number that ya wanna check:");
    scanf("%d",&a);
    if (a%2==0){
        printf("The number is Even.");
    }else{
        printf("Its an Odd number.");
    }

}