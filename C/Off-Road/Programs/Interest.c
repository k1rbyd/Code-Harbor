#include <stdio.h>
#include <math.h>           // importing this library for the usage of power function

int main()
{
    // getting the user input values for principal, rate and time
    int time, principal;
    float rate;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time limit: ");
    scanf("%d", &time);

    // getting the compound and simple interest values
    double ci, si;
    ci = principal * (pow(1 + rate / 100, time)) - principal;   // formula to calculate compound interest
    si = principal * rate * time / 100.0;                      // formula to calculate simple interest

    // printing the results , usage of lf because long float
    printf("Compound Interest: %.2lf\n", ci);
    printf("Simple Interest: %.2lf\n", si);
    
    return 0;
}
