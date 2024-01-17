#include <stdio.h>
int func(int a){
    int flag=0;
    int i=2;
    for(;i<a;i++){
        if (a%i==0)
        flag+=1;
    }
    if (flag==0)
    printf("Its a prime number.\n");
    else
    printf("Its not a prime number.\n");
}
int main()
{
    int num;
    printf("Enter the number ya wanna check:");
    scanf("%d",&num);
    if (num==0)
    printf("Enter a number greater than zero.\n");
    else if (num==1)
    printf("Its neither a prime nor composite.\n");
    else if (num==2)
    printf("Its the only even prime number\n");
    else if (num>2)
    func(num);
}