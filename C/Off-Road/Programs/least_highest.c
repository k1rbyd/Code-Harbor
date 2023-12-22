#include <stdio.h>
int main()
{
int n, count;
float biggest;
float least;
printf("Enter the limit of the array:");
scanf("%d",&n);
float list[n];

for (count=0;count<n;count++)
{
    printf("Enter the number:");
    scanf("%f",&list[count]);
}

biggest=list[0];
least=list[0];

for(count=0;count<n;count++)
{
if (list[count]>biggest)
biggest=list[count];
if (list[count]<least)
least=list[count];
}

printf("The least number so far is: %.2f",least);
printf("\nThe greatest number so far is: %.2f",biggest);

}