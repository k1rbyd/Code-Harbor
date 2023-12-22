#include <stdio.h>

int main()
{
    char inp[100];
    scanf("%s",inp);
    for(int i=0;i<sizeof(inp);i++)
    {
        if(inp[i]=='0')
        inp[i]='1';
    }
    printf("%s",inp);
}