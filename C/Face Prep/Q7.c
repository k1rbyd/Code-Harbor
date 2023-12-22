#include <stdio.h>

int main()
{
    int n;
    int m;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        m = 0;
        int num = i;
        while (num != 0)
        {
            if (num % 10 == 3)
                m++;
            num = num / 10;
        }
        if (m > 0)
            printf("%d ", i);
    }
}