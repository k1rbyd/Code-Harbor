#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[50]; 
    printf("Enter the input:");
    scanf("%s", input); 
    int i;
    for (i=0; i<strlen(input); i++)
    {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
         {
            printf("%c", input[i]);
        }
    }
}