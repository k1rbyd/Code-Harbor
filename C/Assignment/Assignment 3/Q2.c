#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    char *inp;
    inp = (char*)malloc(sizeof(char) * 100);
    fgets(inp, 100, stdin); 

    int i,j;
    int count=0;
    char *ans;
    ans = (char*)malloc(sizeof(char) * 100);
    for (i=0;i<strlen(inp);i++) 
    {
        for(j=0;j<sizeof(vowel);j++)
        {
            if (inp[i]==vowel[j])
            {
                for(int k=0;k<sizeof(vowel);k++) 
                {
                    if(inp[i+1]==vowel[k] && i+1<strlen(inp)) 
                    {
                        ans[count]=inp[i];
                        count++;
                        ans[count]=inp[i+1];
                        count++; 
                        break; 
                    }
                }
            }
        }
    }
    for(i=0;i<count;i=i+2) 
    {
        if (i!=count-2 && i!=0)
            printf(" %c%c,",ans[i],ans[i+1]);
        else if (i==0)
            printf("%c%c,",ans[i],ans[i+1]);
        else
            printf("%c%c",ans[i],ans[i+1]);
    }
    free(inp);
    free(ans);
}