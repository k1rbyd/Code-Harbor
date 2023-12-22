#include <stdio.h>
int main()
{
    float basic,da,hrf,gross;
    printf("Enter the Basic Pay Amount:");
    scanf("%f",&basic);
    da = 0.4 * basic;
    hrf = 0.2 * basic;
    gross = basic + da + hrf;
    printf("The Basic Salary: %.2f\n",basic);
    printf("The Allowance Amount: %.2f\n",da);
    printf("The House Rent Allowance: %.2f\n",hrf);
    printf("The Gross Salary: %.2f\n",gross);
}