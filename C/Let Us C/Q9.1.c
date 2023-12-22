#include <stdio.h>

void calculate(int*,int*);

int main()
{
    int avg,sum;
    calculate(&sum,&avg);
    printf("Sum:%d.\n",sum);
    printf("Average:%d.",avg);
}

void calculate(int *x, int *y)
{
    // x ----> avg, y----> sum
    
    // we are going to be doing this only for 5 integers

    int n1,n2,n3,n4,n5;
    printf("Enter the 5 values:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *x = n1+n2+n3+n4+n5;
    *y = (*x)/5;                  // gets rounded off to the whole number there, example, both 3.2 and 3.9 will print only 3

}