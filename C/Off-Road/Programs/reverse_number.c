#include <stdio.h>
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
void reverse(int);
reverse(num);

}
void reverse(int a)
{
    int r;
    while (a!=0)
    {
            r=a%10;
            printf("%d",r);
            a/=10;
    }
    printf("\n");
}