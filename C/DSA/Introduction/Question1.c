#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first;
    int second;
    int third;
    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    printf("Enter the third number: ");
    scanf("%d",&third);
    if(first>second && first>third){
    printf("%d is the greatest number",first);
    }else if(second>third && second>first){
    printf("%d is the greated number",second);
    }else{
    printf("%d is the greatest number",third);
    }
    return 0;
}
