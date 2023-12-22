#include <stdio.h>

int main()
{
    char colour[] = {'v','i','b','g','y','o','r'};
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    printf("%c\n",colour[i]);
    char res;
    res = colour[i];
    printf("%d",res);
}