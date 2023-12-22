import java.util.Map;
import java.util.Scanner;

class Account {
    private String name;
    private String cardNumber;
    private String pin;
    private double balance;

    public Account(String name, String cardNumber, String pin, double balance) {
        this.name = name;
        this.cardNumber = cardNumber;
        this.pin = pin;
        this.balance = balance;
    }

    public String getCardNumber() {
        return cardNumber;
    }

    public String getPin() {
        return pin;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            System.out.println("Insufficient balance.");
        }
    }

    public void displayAccountInfo() {
        System.out.println("Name: " + name);
        System.out.println("Card Number: " + cardNumber);
        System.out.println("Balance: Rs " + balance);
    }
}
