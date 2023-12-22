#include <stdio.h>

long int rect_fact(int n)
{
    long f;
    if (n==0)
    return 1;
    f=n*rect_fact(n-1);
    return f;               // this will be put on stack
}

int main()
{
    int num;
    long fct;
    printf("Enter the number");
    scanf("%d",&num);
    fct=rect_fact(num);
    printf("Factorial of %d is %ld.",num,fct);
}

// no need to give prototype as the function body comes above the main body