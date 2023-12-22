#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5; float agg,per;
    printf("Enter the five marks obtained:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    agg=(float)m1+m2+m3+m4+m5;
    per=agg/5;
    printf("The aggregate of the student: %f\n",agg);
    printf("The percentage of the student: %f",per);
}