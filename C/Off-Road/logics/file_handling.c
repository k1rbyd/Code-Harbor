#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fpnt;             //declaration of pointer to structure file
    char mychar;
    fpnt=fopen("/home/k1rby/Mine ^^/Personal/Work/Coding/C/Off-Road/logics/file.txt","w");       // 3 modes , 'w' 'a' 'r'
    if (fpnt==NULL)
    {
        printf("Unable to open the file.....");
        exit(0);                                            //terminates the entire program
    }

    printf("Enter the data:");
    scanf("%s",mychar);
    fputc(mychar,fpnt);

fclose(fpnt);
}