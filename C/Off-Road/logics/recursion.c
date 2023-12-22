// recursion is basically, a function in its body, it will call itself
#include <stdio.h>
/* int main()
{
    printf("Lets loop");                    //this will be a non stop loop , as there is no end point.
    main();
} */

int main()
{
    int exitstatus;
    printf("Lets loop \n");
    printf("Enter 1 to continue:");
    scanf("%d",&exitstatus);
    if(exitstatus==1)
    main();
    else
    printf("Loop has ended.");
}