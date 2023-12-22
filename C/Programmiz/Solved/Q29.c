#include <stdio.h>

int main()
{
    int start, end;
    int flag;
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i > 1)
        {
            printf("%d ", i);
        }
    }
}
