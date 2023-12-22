// demo program of auto variables

#include <stdio.h>
#include <conio.h>
int main()
{
    void sample();          //function prototype
    sample();
    sample();
    sample();
    getch();                  // result would be 110 {next line} 110 {next line} 110
}

void sample()
{
    auto int num=10;                // there is no need to write the term "auto"
    num+=100;
    printf("\n num = %d",num);
}                                           
                                                        
// demo program of static variables

#include <stdio.h>
#include <conio.h>
int main()
{
    void sample();          //function prototype
    sample();
    sample();
    sample();
    getch();                                        // result would be 110 {next line} 210 {next line} 310
}

void sample()
{
    static int num=10;                // we have to write the term static, or else the default type taken will be auto
    num+=100;
    printf("\n num = %d",num);
}

// demo program of extern variables
#include <stdio.h>
void sample()
{
    extern int num;
    printf("\n Value of num:%d",num);
    num+=1000;
}