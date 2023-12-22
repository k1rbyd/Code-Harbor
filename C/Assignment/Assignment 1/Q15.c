#include <stdio.h>
void update(int*,int*);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    update(ptr1,ptr2);
}

void update(int *a,int *b)
{
    int c,d;
    c = (*a)*(*b);
    d = (*a)+(*b);
    printf("%d\n",c);
    printf("%d",d);
}