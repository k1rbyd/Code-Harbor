#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    while (1)
    {
        printf("Enter 1 to Find Factorial \nEnter 2 to check if its a prime number \nEnter 3 to check if its even or odd \nEnter 4 to exit\n");
        printf("Whats your choice?");
        scanf("%d",&choice);
    
        switch (choice)
        {
        case 1:
            printf("Enter the number:");
            int num;
            int i=1;
            int fact;
            scanf("%d",&num);
            if (num<0)
            {
                printf("Invalid Number.");
                break;
            }
            else
            {
                for(;i<=num;i++)
                {
                    fact*=i;
                }
                printf("The Factorial : %d.",fact);
                break;
            }
        case 2:
            int j=2;
            int num2;
            int count=0;
            printf("Enter the number:");
            scanf("%d",&num2);
            if (num2<0)
            {
                printf("Invalid Number.");
                break;
            }
            else if (num2==1 || num2==2 || num2==3)
            {
                printf("Its a prime number.");
                break;
            }
            else
            {
                for(j=2;j<num2;j++)
                {
                    if (num2%j==0)
                    count++;
                }
                if (count==0)
                printf("Its a prime number.");
                else
                printf("Its not a prime number.");
            }
        case 3:
            printf("Enter the number:");
            int num3;
            scanf("%d",&num3);
            if (num3%2==0)
            printf("Its an even number");
            else
            printf("Its an odd number.");

        case 4:
            exit(0);
        default:
            printf("Invalid Input\n");
            break;
        }
    }
}