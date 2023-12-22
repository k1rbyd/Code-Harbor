#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;
    float height;
    printf("Enter your weight:");
    scanf("%f",&weight);
    printf("Enter your height:");
    scanf("%f",&height);
    float bmi;
    bmi = (weight/(height*height))*10000;
    printf("%f ",bmi);
    if (bmi<15)
    {
        printf("Starvation.");
    }
    else if (15<bmi && bmi<=17.5)
    {
        printf("Anorexic");
    }
    else if (17.6<=bmi && bmi<=18.5)
    {
        printf("Underweight.");
    }
    else if (18.6<=bmi && bmi<=24.9)
    {
        printf("Ideal.");
    }
    else if (25<=bmi && bmi<=25.9)
    {
        printf("Overweight");
    }
    else if (30<=bmi && bmi<=30.9)
    {
        printf("Obese.");
    }
    else if (bmi>=40)
    {
        printf("Morbidly Obese.");
    }
}
