#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int k=0;
for(;k<argc;++k)
{
    printf("argv[%d] = %s\n",k,argv[k]);
}
}


// this program has to be compiled here and run by cmd or terminal seperately