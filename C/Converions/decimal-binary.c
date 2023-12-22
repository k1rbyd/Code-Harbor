#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    char ans[100];
    int count = 0;

    while (num != 0 && num != 1)
    {
        if (num % 2 != 0)
        {
            num--;
            ans[count] = '1';
            count++;
            num = num / 2;
        }
        else
        {
            ans[count] = '0';
            count++;
            num = num / 2;
        }
    }

    if (num == 1)
    {
        ans[count] = '1';
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }

    return 0;
}
