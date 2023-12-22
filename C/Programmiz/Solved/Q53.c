#include <stdio.h>

int swap(int*,int*,int*);

int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int *p1,*p2,*p3;
    p1=&n1;
    p2=&n2;
    p3=&n3;
    swap(p1,p2,p3);
    printf("%d %d %d",n1,n2,n3);
}

int swap(int *a,int *b,int*c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}