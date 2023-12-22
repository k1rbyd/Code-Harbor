#include <stdio.h>
#include <string.h>

int main()
{
    char inp[10];
    scanf("%s", inp);
    int l = strlen(inp);
    int sum = 0;
    int count = l - 1;
    for(int i = 0; i < l; i++)
    {
        sum += (inp[i] - '0') * (1 << count);
        count--;
    }    
    printf("Decimal Equivalent: %d\n", sum);
}
