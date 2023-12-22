#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int start, int end, int *used_chars)
{
    if(start == end)
    {
        printf("%s\n", str);
        return;
    }
    else
    {
        int i;
        for(i=start;i<=end;i++)
        {
            if(!used_chars[i]) 
            {
                used_chars[i] = 1;
                swap((str+start), (str+i));
                permute(str, start+1, end, used_chars);
                swap((str+start), (str+i));
                used_chars[i] = 0;
                while(i < end && str[i] == str[i+1])
                {
                    i++;
                }
            }
        }
    }
}

int main()
{
    char string[100];
    printf("Enter a string: ");
    gets(string);
    int n = strlen(string);
    int used_chars[n];
    memset(used_chars, 0, sizeof(used_chars)); 
    permute(string, 0, n-1, used_chars);
}
