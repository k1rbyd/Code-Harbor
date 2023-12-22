#include <stdio.h>
int main()
{
    float distance;
    float m,cm,ft,inch;
    printf("Enter the gap distance between two cities:");
    scanf("%f",&distance);
    m = distance * 1000;
    cm = m * 100;
    inch = cm/2.54;
    ft= inch/12;
    printf("The distance in m: %.3f\n",m);
    printf("The distance in cm: %.3f\n",cm);
    printf("The distance in inch: %.3f\n",inch);
    printf("The distance in ft: %.3f",ft);
}