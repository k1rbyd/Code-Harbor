#include <stdio.h>

int main() {
    long long dob;
    long long dob1;
    printf("Enter the Date of Birth: ");
    scanf("%lld", &dob);
    dob1=dob;

    if (dob < 10000000 || dob > 99999999) {
        printf("Invalid Input\n");
        return 0;
    }

    int odd_sum = 0, even_sum = 0, i;
    for (i = 1; i <= 8; i++) {
        if (i % 2 == 0) {
            even_sum += dob % 10;
        } else {
            odd_sum += dob % 10;
        }
        dob /= 10;
    }

    int total_sum = (odd_sum * 3) + even_sum;
    if (total_sum % 10 == 0) {
        printf("%lld,\nLucky Number\n", dob1);
    } else {
        printf("%lld\nNot a Lucky Number\n", dob1);
    }
}
