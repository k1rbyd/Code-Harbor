#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c, d,area;
    printf("Enter the 3 sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
    d = (a+b+c)/2;
    area = sqrt(d*(d-a)*(d-b)*(d-c));
    printf("The area of the given triangle: %.2f\n",area);
    }
    else{
        printf("Invalid length of sides.");
    }
    return 0;
}