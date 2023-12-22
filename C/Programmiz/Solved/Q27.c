#include <stdio.h>
#include <string.h>

int main()
{
    char test[1000];
    char check[1000];
    scanf("%s",test);
    for(int i=strlen(test); i>0; i--)
    {
        check[strlen(test)-i]=test[i-1];
    }
    check[strlen(test)] = '\0';
    if (strcmp(test, check) == 0)
        printf("It's a palindrome");
    else
        printf("It's not a palindrome");
    return 0;
}
