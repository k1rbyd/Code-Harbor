#include <stdio.h>
int main()
{

    int a,b,c,sum;
    int sumf(int,int,int);                  //function prototype
    printf("Enter the values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    sum = sumf(a,b,c);
    printf("The sum is : %d",sum);

}
                                    //declaring the variable
int sumf(int x, int y, int z)       //dummy parameters
{
    int total;
    total = x+y+z;
    return total;
}