#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolderName;
    double balance;
    double interestRate;
    BankAccount(string accNum, string accName, double bal, double intRate)
        : accountNumber(accNum), accountHolderName(accName), balance(bal), interestRate(intRate) {}
    void displayAccountDetails() {
        cout << "Account holder name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest rate: " << interestRate << "%" << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    double minimumBalance;
    SavingsAccount(string accNum, string accName, double bal, double intRate, double minBal)
        : BankAccount(accNum, accName, bal, intRate), minimumBalance(minBal) {}
    void displayAccountDetails() {
        BankAccount::displayAccountDetails();
        cout << "Minimum balance: " << minimumBalance << endl;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance - amount >= minimumBalance) {
            balance -= amount;
        } else {
            cout << "Withdrawal failed. Insufficient balance." << endl;
        }
    }
};

int main() {
    string accNum, accName;
    double bal, intRate, minBal;

    cout << "Enter account number: ";
    getline(cin, accNum);

    cout << "Enter account holder name: ";
    getline(cin, accName);

    cout << "Enter balance: ";
    cin >> bal;

    cout << "Enter interest rate (%): ";
    cin >> intRate;

    cout << "Enter minimum balance: ";
    cin >> minBal;

    SavingsAccount savings(accNum, accName, bal, intRate, minBal);
    cout << "Account number: " << savings.accountNumber << endl;
    savings.displayAccountDetails();
    savings.withdraw(2000);
    cout << "Account number: " << savings.accountNumber << endl;
    savings.displayAccountDetails();
    savings.deposit(4000);
    cout << "Account number: " << savings.accountNumber << endl;
    savings.displayAccountDetails();
}
