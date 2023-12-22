#include <stdio.h>

char toChar(int num)
{
    return num + '0';
}

int main()
{
    int num;
    scanf("%d", &num);
    char ans[100];
    int count = 0;
    while (num != 0)
    {
        ans[count] = toChar(num % 8);
        count++;
        num = num / 8;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }
}
