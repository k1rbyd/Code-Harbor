#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char test[10000];
    fgets(test,sizeof(test),stdin);

    char check;
    int count;
    scanf("%c",&check);

    for(int i=0;i<strlen(test);i++)
    {
        if (check==test[i])
        count++;
    }
    printf("Frequency of %c:%d",check,count);
}