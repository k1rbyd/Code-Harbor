#include <stdio.h>
int main()
{
    int arr[]={10,15,25,90.120};
    int n;
    void sample(int *);                 // function prototype
    sample(arr);                        // calling the function using call by reference
    
    // printing the array after function part is over
    for (n=0;n<5;n++)
    {
        printf("arr[%d] = %d\n",n,arr[n]);
    }
}

void sample(int *pnt)
{
    int n;
    for(n=0;n<5;n++)
    {
        *(pnt+n)=*(pnt+n) + 100;
        // same as , pnt[n]+=100;
    }
}