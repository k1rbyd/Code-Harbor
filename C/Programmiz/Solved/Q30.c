#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int final = num;
    int digits[10000];
    int count = 0;
    while (num != 0) {
        digits[count] = num % 10;
        num /= 10;
        count++;
    }
    int sum=0;
    for (int i =0; i<count; i++) {
        sum += digits[i]*digits[i]*digits[i];
    }
    if (sum==final)
    printf("Its an amstrong number");
    else
    printf("Its not an amstrong number");
}
