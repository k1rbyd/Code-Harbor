#include <stdio.h>

int main()
{
    char vowel[] = {'a','e','i','o','u','A','E','I','O','U'};
    char test;
    scanf("%c",&test);
    int i;
    int count=0;
    for(i=0;i<5;i++)
    {
        if (test==vowel[i])
        {
            printf("Its a vowel");
            count=1;
            break;
        }
    }
    if (count==0)
    printf("Its a consonant");
}