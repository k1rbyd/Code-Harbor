#include <stdio.h>

int main() {
    int num, dig1, dig2, dig3, dig4, sum1, sum2, smallest_sum;
    
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    
    if (num >= 1000 && num <= 9999) {
        dig1 = num / 1000;
        dig2 = (num / 100) % 10;
        dig3 = (num / 10) % 10;
        dig4 = num % 10;
        
        sum1 = (dig1*10) + dig2;
        sum2 = (dig3*10) + dig4;
        
        smallest_sum = sum1 + sum2;
        
        printf("The smallest possible two digit sum of %d is %d\n", num, smallest_sum);
    } else {
        printf("Error: Input must be a four digit number\n");
    }
    
    return 0;
}
