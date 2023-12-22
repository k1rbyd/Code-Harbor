#include <stdio.h>
int main()
{
    char value;
    printf("Enter the character:");
    scanf("%c",&value);
    if (value>=65 && value<=90)
    printf("Its an Upper Case Letter.");
    else if (value>=97 && value<=122)
    printf("Its an Lower Case Letter.");
    else if (value>=48 && value<=57)
    printf("Its a Digit.");
    else if ((value>=0 && value<=47 )|| (value>=58 && value<=64) || (value>=91 && value<=96) || (value>=123 && value<=127 ) )
    printf("Its a Special Character.");
}