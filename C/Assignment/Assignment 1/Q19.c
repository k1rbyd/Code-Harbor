#include <stdio.h>
char days[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
char* day_name(int);
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 7 || num < 1) {
        printf("Invalid");
    } else {
        char* name = day_name(num);
        printf("%s", name);
    }
    return 0;
}
char* day_name(int a)
{
    int index = a - 1;
    return days[index];
}
