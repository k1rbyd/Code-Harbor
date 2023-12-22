#include <stdio.h>
#define MAX 100

int main()
{
    int num[MAX];
    
    char name[MAX][50];
    int salary[MAX];
    int n, i, index;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Employee Number: ");
        scanf("%d", &num[i]);
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Employee Salary: ");
        scanf("%d", &salary[i]);
    }

    index = 0;
    for (i = 1; i < n; i++)
    {
        if (salary[i] > salary[index])
        {
            index = i;
        }
    }

    printf("Employee with highest salary:\n");
    printf("Number: %d\n", num[index]);
    printf("Name: %s\n", name[index]);
    printf("Salary: %d\n", salary[index]);

    return 0;
}
