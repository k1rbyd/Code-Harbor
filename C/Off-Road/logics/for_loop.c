#include <stdio.h>
int main()
{
    int n;
    for (n=1;n<=100;++n)
    {
    printf("%d\t",n);
    }
}

#include <stdio.h>
int main()
{
int n;
for (n=1;n<100;printf("%d\t",n),n++);
printf("The control is out of the block.");
}

#include <stdio.h>
int main()
{
int n=1000;
for (;n>=500;printf("%d\t",n),n-=5);
printf("\nThe control is out of the loop block.");
}

#include <stdio.h>
int main()
{
int a,b;
for (a=100,b=1;a>=50 && b<=5;a-=2,b++)
printf("a=%d\tb=%d\n",a,b);
}
