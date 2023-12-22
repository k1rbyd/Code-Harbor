#include <stdio.h>

int main() {
    int income;
    float tax;

    printf("Enter the income:");
    scanf("%d", &income);

    if (income <= 150000) {
        printf("no tax");
    }
    else if (income >= 150001 && income <= 300000) {
        tax = 0.1 * (income - 150000);
        printf("%0.f", tax);
    }
    else if (income >= 300001 && income <= 500000) {
        tax = 0.2 * (income - 150000);
        printf("%0.f", tax);
    }
    else if (income > 500001) {
        tax = 0.3 * (income - 150000);
        printf("%0.f", tax/2);
    }

    return 0;
}
