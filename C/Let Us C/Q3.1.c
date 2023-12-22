#include <stdio.h>
int main()
{
    float cp,sp,l,p;
    printf("Enter the cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    if (cp>sp)
    {
    l = cp-sp;
    printf("Loss : %.2f.",l);
    }
    else if (sp>cp)
    {p = sp-cp;
    printf("Profit : %.2f.",p);
    }
    else if (sp==cp)
    {
        printf("There is no loss-gain.");
    }
}