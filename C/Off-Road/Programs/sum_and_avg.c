#include <stdio.h>
int main()
{
int n;
printf("Enter the number count:");
scanf("%d",&n);
int count=0;
int numbers[1000000];
int sum=0;
while(count<n)
{
printf("Enter the number:");
scanf("%d",&numbers[count]);
sum+=numbers[count];
count++;
}

printf("The sum is %d and the average is %d",sum,sum/count);
printf("\n_______________________________________");

}