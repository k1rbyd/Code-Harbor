#include <stdio.h>
int main()
{
void somedata(int,float);
int a=100;
float b=200.0;
somedata(a,b);              // call by values (passing the copie of values of a and b)
printf("The values of a and b after returning from the function = %d\t%.2f\n\n",a,b);
}
void somedata(int a1,float b1)
{
    a1+=100;
    b1*=2;
    printf("Values of the formal parameters a1 and b1 = %d\t%.2f\n\n",a1,b1);
}