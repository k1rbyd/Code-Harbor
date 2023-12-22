#include <stdio.h>
int main()
{
float pmt,roi,sint;
int tm;
float interest(float,int,float);
printf("Enter the principal amount, rate of interest and time in years:");
scanf("%f%f%d",&pmt,&roi,&tm);
sint=interest(pmt,roi,tm);
printf("The interest : %.2f.",sint);
}
float interest(float f1,int i,float f2)
{
int inte;
inte=(f1*i*f2)/100;
return inte;
}