#include <stdio.h>
int main()
{
    int a,n1,n2,n3,n4,n5,n6;
    printf("Enter the amount:");
    scanf("%d",&a);
    n1=a/100;
    a=a%100;
    n2=a/50;
    a=a%50;
    n3=a/10;
    a=a%10;
    n4=a/5;
    a=a%5;
    n5=a/2;
    a=a%2;
    n6=a/1;
    a=a%1;
    int notes;
    notes = n1+n2+n3+n4+n5+n6;
    printf("The number of notes:%d.\n",notes);
}