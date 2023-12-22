#include <stdio.h>
int x = 10; //global variable
int main()
{
    int x = 50; //local variable
    {
        int x = 10; //another local variable
        printf("%d is the value of x.\n",x);
    }
    printf("%d is the value of x.\n",x);
    {
        extern int x;                               //getting global variable value                 
        printf("The global value of x is %d.\n",x);
    }
}