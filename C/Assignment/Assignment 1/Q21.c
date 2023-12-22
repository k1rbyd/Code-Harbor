#include <stdio.h>
#include <string.h>

struct BankAccount {
    char CustName[50];
    float AvlBalance;
    char AccType[10];
};

void withdrawal(struct BankAccount* account) {
    float amount;
    printf("Enter amount for withdrawal: ");
    scanf("%f", &amount);
    if (amount > account->AvlBalance) {
        printf("Invalid amount request, check balance.\n");
        return;
    }
    account->AvlBalance -= amount;
    printf("Amount withdrawn: %.2f & Available balance: %.2f\n", amount, account->AvlBalance);
}

void deposit(struct BankAccount* account) {
    float amount;
    printf("Enter amount for deposit: ");
    scanf("%f", &amount);
    account->AvlBalance += amount;
    printf("Amount deposited: %.2f\nAvailable balance is: %.2f\n", amount, account->AvlBalance);
}

void display_balance(struct BankAccount* account) {
    printf("Name: %s\nAvailable balance: %.2f\nAccount type: %s\n", account->CustName, account->AvlBalance, account->AccType);
}

int main() {
    struct BankAccount account = {"Prasanth Kumar", 4500.00, "SB"};
    int choice;
    do {
        printf("\nMenu\n1. Withdrawal\n2. Deposit\n3. Display Balance\n4. Exit\n");
        printf("Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                withdrawal(&account);
                break;
            case 2:
                deposit(&account);
                break;
            case 3:
                display_balance(&account);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Input\n");
        }
    } while (choice != 4);
    return 0;
}
