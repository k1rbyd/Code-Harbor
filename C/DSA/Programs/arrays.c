// run time initizlisation is when we run a loop and get the values from user input

#include <stdio.h>
#include <string.h>

int main()
{
    int nums[5];
    int i;
    // making an array
    for (i=0;i<5;i++){
        printf("Enter the value of the %d element: ",i+1);
        scanf("%d",&nums[i]);
    }
    // reading an array
    for (i=0;i<5;i++){
        printf("nums[%d]:%d\n",i,nums[i]);
    }    
}