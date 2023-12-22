#include <stdio.h>
int main()
{
    struct students
    {
        char name[4000];
        int number;
    } s1,s2;
    printf("Enter the first students Name and Roll Number:");
    scanf("%s %d",&s1.name,&s1.number);
    printf("Enter the second students Name and Roll Number:");
    scanf("%s %d",&s2.name,&s2.number);

    printf("Students Name: %s\n Roll Number: %d\n",s1.name,s1.number);
    printf("Students Name: %s\n Roll Number: %d\n",s2.name,s2.number);
}
