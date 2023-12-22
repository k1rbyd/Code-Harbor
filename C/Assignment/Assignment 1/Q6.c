#include <stdio.h>
#include <string.h>

int main()
{
    char names[11][1000];
    int runs[11];
    int total = 0, maxi = 0, index = 0, count = 0;

    for (int i = 0; i < 11; i++)
    {
        printf("Name of player %d: ", i+1);
        scanf("%s", names[i]);
        printf("Runs scored by %s: ", names[i]);
        scanf("%d", &runs[i]);

        total += runs[i];

        if (runs[i] > maxi)
        {
            maxi = runs[i];
            index = i;
            count = 0;
        }
        else if (runs[i] == maxi)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("Total runs scored: %d\n", total);
        printf("Cannot be predicted.");
    }
    else
    {
        printf("Total runs scored: %d\n", total);
        printf("Man of the match: %s\n", names[index]);
    }

    return 0;
}
