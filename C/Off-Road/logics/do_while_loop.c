#include <stdio.h>
int main()
{
    int n=1;
    do{
        printf("%d\t",n);
        n++;
    }
    while(n<=100);
    printf("The control is out of the loop block.");
}