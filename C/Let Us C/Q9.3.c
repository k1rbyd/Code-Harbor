#include <stdio.h>

int main()
{
    float j, *ptr1, **ptr2;
    j = 3.14;
    ptr1 = &j;
    ptr2 = &ptr1;
    printf("The address of j: %p.\n",&j);
    printf("The address of j: %p.\n",ptr1);
    printf("The address of j: %p.\n",*ptr2);
    printf("The value of j: %f.\n",j);
    printf("The value of j: %f.\n",*(&j));
    printf("The value of j: %f.\n",(ptr1));
    printf("The value of j: %f.\n",(ptr2));
}