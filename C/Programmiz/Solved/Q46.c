#include <stdio.h>

int main()
{
    int class[10];
    for(int i=0;i<10;i++)
    {
        int temp;
        scanf("%d",&temp);
        class[i]=temp;
    }
    int largest = class[0];
    for (int j=0;j<10;j++)
    {
        if (class[j]>largest)
        largest=class[j];
    }
    printf("Largest:%d",largest);
}