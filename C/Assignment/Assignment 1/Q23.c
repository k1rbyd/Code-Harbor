#include <stdio.h>

int main() {
    int num_registrations[3] = {0};  // initialize to 0
    int max_registrations = 1;
    
    int code, amount;
    printf("Enter product code (1=Programming, 2=Robotics, 3=Academic Writing): ");
    scanf("%d", &code);
    printf("Enter order amount: ");
    scanf("%d", &amount);
        
    float discount = 0.0;
    if (code == 1 && amount > 1000) {
        discount = 0.1;
    } else if (code == 2 && amount > 750) {
        discount = 0.05;
    } else if (code == 3 && amount > 500) {
        discount = 0.1;
    } else {
        printf("Invalid input\n");
        return 0;
    }
        
    float net_amount = amount * (1 - discount);
    printf("Thanks, your discounted amount: Rs. %.2f\n", net_amount);
        
}