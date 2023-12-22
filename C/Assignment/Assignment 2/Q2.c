#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=0;
    printf("Enter the number:");
    scanf("%d",&num);
    int factors[1000] = {0};

    if (num < 0) 
    {
        printf("Error: The input must be a positive integer.\n");
        return 1; 
    }

    while (num > 1)
    {
        if (i > 500) {
            printf("Error: The number has too many factors.\n");
            return 1; 
        }

        if (num % 2 == 0) {
            factors[i++] = 2; 
            num /= 2; 
            continue; 
        }

        for(int j = 3; j <= num; j += 2)
        {
            while (num % j == 0) {
                factors[i++] = j; 
                num /= j; 
            }
        }
    }

    printf("The factors of the input are: ");
    for(int k = 0; k < i; k++) {
        printf("%d ", factors[k]);
    }

}
