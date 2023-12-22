#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    fgets(sentence, 1000, stdin);    
    for(int i=strlen(sentence)-1; i>=0; i--)
    {
        if(sentence[i] == '\n')
            continue;
        if(sentence[i] == ' ' || i == 0)
        {
            int j = i;
            if(i != 0) j++;
            while(sentence[j] != ' ' && sentence[j] != '\n' && sentence[j] != '\0')
            {
                printf("%c", sentence[j]);
                j++;
            }
            printf(" ");
        }
    }
    printf("\n");
}
