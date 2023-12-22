#include <stdio.h>
int n=10;       //global variable
int main()
{
    int n=90; //local variable
    printf("%d\n",n);         //local variable will be printed as it will be given more precedence than global variable

    {
        extern int n;       //taking global variable
        printf("%d\n",n);           // here, due to the extern keyword used, it will give precedence to the globlal variable
    }
}