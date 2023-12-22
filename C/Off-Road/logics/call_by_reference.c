#include <stdio.h>
int main()
{
    void somedata(int *,float *); //int * and float * both mean that, the address is going to be taken
    int a=100;
    float b=200.0;
    somedata(&a,&b);        //call by reference
    printf("\nValues of a and b after returning from fucntion = %d\t%.2f\n\n",a,b);
}

void somedata(int *a1,float *b1)
{

    *a1=*a1+100;
    *b1=*b1*2;
}

// it makes up the short coming of functions, usualy functions can return only 1 value, but using call by reference, we can increase that