#include <stdio.h>
int fact(int);
int main()
{
    int n,m,r1,r2;
    printf("Enter number of total consonants:");
    scanf("%d",&n);
    printf("Enter the number of chosen consonants:");
    scanf("%d",&r1);
    printf("Enter number of total vowels:");
    scanf("%d",&m);
    printf("Enter the number of chosen consonants:");
    scanf("%d",&r2);
    if (n>0 && m>0 && r1>0 && r2>0)
    {
    int a;
    int b;
    a = fact(n)/(fact(r1)*fact(n-r1));
    b = fact(m)/(fact(r2)*fact(m-r1));
    printf("Number of ways of selecting words:%d.",a*b);
    }
    else
    printf("Invalid.");
}

int fact(int a)
{
    if (a==0)
    return 1;
    else
    return a*fact(a-1);
}