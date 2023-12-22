#include <stdio.h>
int main()
{
    int i;
    char a;
    float b;
    double d;
    printf("The size of an integer is %zu.\n",sizeof(i));
    printf("The size of a character is %zu.\n ",sizeof(a));
    printf("The size of a float is %zu.\n",sizeof(b));
    printf("The size of a double is %zu.\n",sizeof(d));
// we can use either %lu or %zu for the data formats
}