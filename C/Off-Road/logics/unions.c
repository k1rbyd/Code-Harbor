#include <stdio.h>
int main()
{
    union sample
    {
        int a;
        float b;
        double c;
    };                      // end of structure specification
    
    union sample uv;        // declaration of union variable
    printf("size of union variable uv is %d", sizeof(uv));          // since union can handle only one at a time, size given will be the greatest size of the data kept inside
                                                                                            // since double is the greatest data type inside, the output will be 8.
    uv.a = 100;
    uv.b = 100.99;
    uv.c = 10000000.00;
    printf("\n Value of a:",uv.a);              
    printf("\n Value of b:",uv.b);              // using the dot operator
    printf("\n Value of c:",uv.c);              

    // the output wont be proper, and the value of c will only be shown, as it was assigned the last.
    //          this is the specialty of union, it will look into and deal with only the last operated variable
}